#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter principle : ";
    cin>>p;
    cout<<"Enter rate : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"The simple interst is : "<<si;    
}
