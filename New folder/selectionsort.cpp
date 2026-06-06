#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *ar[], int n){
    for(int i=1; i<n+1; i++){
        for(int j=i+1; j<=n; j++){
            if(*ar[i]>*ar[j]){
                swap(*ar[i], *ar[j]);
            }
        }
    }
}
int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        in>>arr[i];
    }
    int *ar[n+1];
    for(int i=1; i<=n; i++){
        ar[i]=&arr[i];
    }
    selectionSort(ar, n);
    for(int i=1; i<=n; i++){
        out<<arr[i]<<" ";
    }
    out<<endl;
    return 0;

}