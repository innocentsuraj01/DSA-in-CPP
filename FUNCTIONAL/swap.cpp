#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first no. : ";
    cin>>a;
    cout<<"Enter second no. : ";
    cin>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swap"<<" "<<a<<" "<<b;
}