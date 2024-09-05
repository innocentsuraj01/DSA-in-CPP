#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the first axis : ";
    cin>>x;
    cout<<"Enter the second axis : ";
    cin>>y;
    if(x==0 and y==0)
    cout<<"Lies on the origin";
    else if(x==0)
    cout<<"Lies on the Y axis";
    else if (y==0)
    cout<<"Lies on the X axis";
    else
    cout<<"Lies on somewhere";

}