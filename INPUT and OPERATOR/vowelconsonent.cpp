#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    if(ch>=97 && ch<=122 || ch>=65 && ch<=90){
        if (ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
        cout<<"The Character is vowel ! ";
        }
        else {
        cout<<"The Character is Consonent ! ";
        }
    }
    else{
        cout<<"The Character is not a alphabet ! ";
    }
}
