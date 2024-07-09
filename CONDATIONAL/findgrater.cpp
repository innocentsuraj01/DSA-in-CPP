#include<iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    float area = length * breadth;
    float parameter = 2 * length + breadth;
    if (area>parameter){
        cout<<"Area is grater";
    }
    else{
        cout<<"parameter is greater";
    }

}