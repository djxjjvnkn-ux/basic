#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int a, b, c;
    fin >> a >> b;
    c = ucln(a, b);
    fout << c << endl;
    
}