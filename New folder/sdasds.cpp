#include <bits/stdc++.h>  
#include<fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    if(!in.is_open() || !out.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int a, b;
    in >> a >> b;
    out << "Sum: " << a + b << endl;
    cout << "Da ghi xong";

    return 0;
}