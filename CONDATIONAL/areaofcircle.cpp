#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a radius : ";
    cin>>r;
    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;
    if (area > circumference ){
        cout<<"Area is grater " ;
    }
    else{
        cout<<"circumference is grater or equal to the area ";
    }
    
}