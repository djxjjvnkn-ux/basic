#include<bits/stdc++.h>
using namespace std;
void insertionsort(int *ar[], int n){
    *ar[0]=INT_MIN;
    for(int i=2;i<=n;i++){
        int key=*ar[i];
        for(int j=i-1;j>=0;j--){
            if(key<=*ar[j]){
                *ar[j+1]=*ar[j];
            }
            else if(key>*ar[j]){
                *ar[j+1]=key;
                break;
            }
        }
    }

    }

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    int *ar[n+1];
    int arr[n+1];
    for(int i=1;i<=n;i++){
        in>>arr[i];
    }
    for(int i=0;i<=n;i++){
        ar[i]=&arr[i];
    }
    insertionsort(ar,n);
    for(int i=1;i<=n;i++){
        out<<*ar[i]<<" ";
    }
}