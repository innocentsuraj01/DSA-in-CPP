#include<iostream>
using namespace std;
int main( ) {
    int a = 5, b, c ;
    b = a = 15 ;
    c = a < 15 ;
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;
}

#include<iostream>
using namespace std;
int main() {
 int x = 3 ;
 float y = 3.0 ;
 if (x == y)
 cout <<"x and y are equal" ;
 else
 cout << "x and y are not equal" ;
 return 0;
}

#include<iostream>
using namespace std;
int main(){
 int test = 0;
 cout << "First character " << '1' << endl;
 cout << "Second character " << (test ? 3 : '1') << endl;
 return 0;
}

#include <iostream>
using namespace std;
int main(){
 int a = 18; int b = 12; 
 bool t = (a > 20 && b < 15)? true : false;
 cout <<"Value of t: " << t ;
 return 0;
}

#include <iostream>
using namespace std;
int main() {
 int number = -4;
 char result;
 result = number > 0 ? 'P' : 'N';
 cout << result << endl;
 return 0;
}