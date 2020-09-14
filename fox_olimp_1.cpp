#include <iostream>
#include<string>

using namespace std;

bool is_poly(string str){
for(int i=0;i<str.size()/2;i++){
    if(str[i]!=str[str.size()-i-1]){
        return false;
    }
}
return true;
}

string to_seven(int num,int base){
    string result;
    while (num>0){
        result=to_string(num%base)+result;
        num=num/base;
    }
    return result;
}

int main()
{
    int i=1000;
    while(!(is_poly(to_seven(i,7))&&is_poly(to_seven(i,5)))){
        i++;
    }
    cout << i << " " <<to_seven(i,7) <<" " << (to_seven(i,5)) << endl;
    return 0;
}
