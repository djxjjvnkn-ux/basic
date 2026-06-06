#include<bits/stdc++.h>
using namespace std;
void quicksort(int *ar[], int l, int r){
    if(l >= r) return;

    int i = l;
    int j = r;
    int pivot = *ar[(l + r) / 2];

    while(i <= j){
        while(*ar[i] < pivot) i++;
        while(*ar[j] > pivot) j--;

        if(i <= j){
            swap(*ar[i], *ar[j]);
            i++;
            j--;
        }
    }

    quicksort(ar, l, j);
    quicksort(ar, i, r);
}

int main(){
    ifstream input("input.txt");
    ofstream output("output.txt");
    int n;
    input>>n;
    int arr[n+1];
    int *ar[n+1];
    for(int i=1;i<=n;i++){
        input>>arr[i];
        ar[i]=&arr[i];
    }
    quicksort(ar,1,n);
    for(int i=1;i<=n;i++){
        output<<*ar[i]<<" ";
    }
}