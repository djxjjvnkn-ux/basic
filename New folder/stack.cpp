#include<bits/stdc++.h>
using namespace std;
int stack1[102];
int stack2[103];
int top1=-1;
int top2=-1;
int sl1=0;
int sl2=0;
int isnull1=1, isnull2=1;
int push(int x){
    if(isnull1){
        top1=0;
        stack1[top1]=x;
        isnull1=0;
        sl1++;
    }
    else{
        top1++;
        sl1++;
        stack1[top1]=x;
        isnull=0;  
    }
int pop(){
    if(isnull1) return -1;
    else{
        int y=stack1[top1];
        top1--;
        sl1--;
    }
}
