#include<iostream>
using namespace std;
int main (){
    float cp,sp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter selling Price : ";
    cin>>sp;
    float rup = sp-cp;
    if (sp>cp){
        cout<<"The Profit is : "<<rup;
    }
    if(sp<cp){
        cout<<"The Loss is : "<<rup;
    }
    if(sp==cp){
        cout<<"No Profit! No Loss!";
    }
    
}