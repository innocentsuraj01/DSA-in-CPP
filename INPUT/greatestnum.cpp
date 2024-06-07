#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter first Integer : ";
    cin>>a;
    cout<<"Enter second Integer : ";
    cin>>b;
    cout<<"Enter third Integer : ";
    cin>>c;
    if (a>b && a>c){
        cout<<"First Interger is Greatest";
    }
    if(b>a && b>c){
        cout<<"Second Interger is Greatest";
    }
    else{
        cout<<"Third Interger is Greatest";
    }
    
}   