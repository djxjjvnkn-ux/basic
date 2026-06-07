#include <iostream>
 using namespace std;
  int main() {
    int x = 10; 
    int *p; p = &x; 
    cout << "x = " << x << endl; 
    cout << "&x = " << &x << endl; 
    cout << "p = " << p << endl; 
    cout << "*p = " << *p << endl; 
    *p = 99; cout << "Sau khi *p = 99:" << endl; cout << "x = " << x << endl; cout << "*p = " << *p << endl; return 0; }