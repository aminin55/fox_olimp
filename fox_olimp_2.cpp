#include <iostream>
#include<string>

using namespace std;



int main()
{
    int i=0;
    while( ((155|i)&(182|~i)) != 191){
    i++;
    }
    cout <<i;
    return 0;
}

//ответ 36