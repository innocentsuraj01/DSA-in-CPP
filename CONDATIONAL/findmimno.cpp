#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a<b and a<c)
    cout<<"First number is least marks";
    else if(b>a and b>c)
    cout<<"Second number is least marks";
    else
    cout<<"Third number is least marks";
}