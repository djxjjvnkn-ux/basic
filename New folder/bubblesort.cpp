#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *ar[], int n){
    int c=1;
    while(c){
        c=0;
    for(int i=1;i<n;i++){
        if(*ar[i]>*ar[i+1]){
            swap(*ar[i],*ar[i+1]);
            c++;
        }
        }
        n--;
    }
}
int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    int *ar[n+1];
    int arr1[n+1];
    for(int i=1;i<=n;i++){
        in>>arr1[i];
    }
    for(int i=1;i<=n;i++){
        ar[i] = &arr1[i];
    }
    bubblesort(ar,n);
    for(int i=1;i<=n;i++){
        out<<arr1[i]<<" ";
    }
}