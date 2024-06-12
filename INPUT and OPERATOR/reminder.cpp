#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a; //dividend
    cout<<"Enter the second number : ";
    cin>>b; //divisor
    c = a/b; //quotient
    int r = a - (b*c); //reminder //a%b also using 
    cout<<"Reminder of two numbers is : "<<r;
}