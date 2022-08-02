#include<iostream>
using std::cin;
using std::cout;

int main(){
    
    int num;
    cin >> num;

    for (int idx = 1; idx<=10; idx++)
    {
        cout<< num << " * " << idx <<" = "<< num*idx <<"\n";
    }

    return 0;
}
