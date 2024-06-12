#include<iostream>
using namespace std;
int main(){
    float Hindi,English,Physics,Chemistary,Biology;
    cout<<"Enter Hindi number : ";
    cin>>Hindi;
    cout<<"Enter English number : ";
    cin>>English;
    cout<<"Enter Physics number : ";
    cin>>Physics;
    cout<<"Enter Chemistry number : ";
    cin>>Chemistary;
    cout<<"Enter Biology number : ";
    cin>>Biology;
    float presentage = (Hindi+English+Physics+Chemistary+Biology)/5;
    cout<<"Total presentage is : "<<presentage <<" % ";
}