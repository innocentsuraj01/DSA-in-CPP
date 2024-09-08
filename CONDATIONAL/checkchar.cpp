#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if ((ch>='A' and ch<='Z') or (ch>='a' and ch<='z'))
    cout<<"Character is Alphabet ";
    else if (ch>='0' and ch<='9')
    cout <<"Character is Digit";
    else 
    cout<<"Character is Spacial Character";
}