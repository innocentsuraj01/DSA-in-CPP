#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First angle : ";
    cin>>a;
    cout<<"Enter Second angle : ";
    cin>>b;
    cout<<"Enter Third angle : ";
    cin>>c;
    if(a==b and b==c)
    cout<<"Equilateral Triangle";
    else if(a!=b and b!=c)
    cout<<"Scalene Triangle";
    else
    cout<<"Isosceles Triangle";
    
} 