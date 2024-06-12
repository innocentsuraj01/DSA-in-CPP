#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Integer : ";
    cin>>n;
    if (n%5==0 || n%3==0){
        cout<<"Divisiable number";
    }
    else{
        cout<<"Not Divisiable number";
    }
}   