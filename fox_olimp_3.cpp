#include <iostream>
#include <vector>

using namespace std;
void print_vec(vector<int> vec){
for(auto val:vec)
    cout <<val <<" ";
cout << endl;

}

int main()
{
//    vector<int> noms = {1,5,8};
//    int summa=10;
    vector<int> noms = {50,100,500,1000,5000};
    int summa=18750;

    vector<int> nums(summa+1,summa*summa);// Заводим вектор и заполняем его больщими значениями. Главное не переполнить !!!
    vector<int> prev(summa+1,-1);
    vector<int> ans;
    nums[0]=0; // сумму в 0 рублей можно набрать нулем купюр


for (int i=1; i<summa+1; i++){

    for (auto nom:noms){
        if (i-nom >=0 && nums[i-nom]<nums[i])  // Помни про кузнечика !!!!
        {
            nums[i]=nums[i-nom];
            prev[i]=nom;
        }
    }
    nums[i]++;
}
    while( summa >0){
        ans.push_back(prev[summa]);
        summa-=prev[summa];
    }
    print_vec(ans);
    return 0;
}
