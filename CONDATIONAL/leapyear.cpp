#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a year : ";
    cin>>r;
    if(r%4==0 || r%400==0) cout<<"Yes it is a leap year ";
    else if(r%100==0) cout<<"Not it is a leap year ";
}