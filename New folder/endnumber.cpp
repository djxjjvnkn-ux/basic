#include<bits/stdc++.h>
using namespace std;
long long endnumber(int a, int n){
    long long f;
    n=4+n%4;
    long long r=a%10;
    for(int i=2;i<=n;i++){
        f=r*a%10;
        a=f%10;
    }
    return f;

}
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    long long a, n, f;
    fin >> a >> n;
    /*if (!(a <= 100 && n <= pow(10, 6))) {
        cout << "Invalid input" << endl;
        return 0;
    }*/
    f=endnumber(a, n);

    fout <<"f = " << f << endl;

}