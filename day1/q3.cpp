#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number whose factorial is to be done"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    cout<<"the factorial of n natural no is  "<<fact<<endl;
    return 0;
}