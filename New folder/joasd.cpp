#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    if (!in.is_open() || !out.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int a, b;
    if (!(in >> a >> b)) {
        cout << "Khong doc duoc 2 so" << endl;
        return 1;
    }

    out << "Sum: " << a + b << endl;
    cout << "Da ghi xong" << endl;

    return 0;
}