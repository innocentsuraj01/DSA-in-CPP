#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    int ascii = (int)ch;
    cout<<"ASCII value is : "<<ascii<<endl;
    if (ascii<91 && ascii>64){
        cout<<"Upper case alphabet!";
    }
    if (ascii>96 && ascii<123){
        cout<<"Lower case alphabet!";
    }
    if (ascii>47 && ascii<58){
        cout<<"Numbers!";
    }
}