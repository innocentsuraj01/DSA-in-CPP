#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"The min Value is "<<min(a,b);
}