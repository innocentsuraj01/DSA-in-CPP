#include<iostream>
using namespace std;
int main(){
    int p,q;
    cout<<"Enter a first number : ";
    cin>>p;
    cout<<"Enter a second number :";
    cin>>q;
    p += q -= p;
    cout<<p<<" "<<q;
    return 0;
}