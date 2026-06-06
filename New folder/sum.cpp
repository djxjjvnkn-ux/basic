#include<bits/stdc++.h>
using namespace std;
long double sum(long double A[], int n) {
    long double s = 0;
    for (int i = 0; i < n; i++) {
        s += A[i];
    }
    return s;
}
int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    long double A[n];
    for (int i = 0; i < n; i++) {
        in >> A[i];
    }
    out << setprecision(10) << sum(A, n) << endl;
    return 0;
}