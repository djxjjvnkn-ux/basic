#include<bits/stdc++.h>
using namespace std;
char stack1[102];
char stack2[103];
int top1=-1;
int top2=-1;
int sl1=0;
int sl2=0;
int isnull1=1, isnull2=1;
int push1(char x){
    if(isnull1){
        top1=0;
        stack1[top1]=x;
        isnull1=0;
        sl1++;
    }
    else{ 
        top1++;
        stack1[top1]=x;
        sl1++;
        isnull1=0;
    }
    return top1;
}
int push2(char x){
    if(isnull2){
        top2=0;
        stack2[top2]=x;
        isnull2=0;
        sl2++;
    }
    else{ 
        top2++;
        stack2[top2]=x;
        sl2++;
        isnull2=0;
    }
    return top2;
}
char pop1(){
    if(isnull1){
        return '.';
    }
    else{
        char x=stack1[top1];
        top1--;
        sl1--;
        if(sl1==0){
            isnull1=1;
        }
        return x;
    }
}
char pop2(){
    if(isnull2){
        return '.';
    }
    else{
        char x=stack2[top2];
        top2--;
        sl2--;
        if(sl2==0){
            isnull2=1;
        }
        return x;
    }
}
int main(){
   ifstream in("input.txt");
    ofstream out("output.txt");
    string x;
    in>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>='A' && x[i]<='Z'){
            push2(x[i]);
        }
        else{
            if(x[i]=='('){
                push1(x[i]);
            }
            if(x[i]=='+' || x[i]=='-'){
                while(isnull1==0 && (stack1[top1]=='+' || stack1[top1]=='-' || stack1[top1]=='*' || stack1[top1]=='/' || stack1[top1]=='^')){
                    push2(pop1());
                }
                push1(x[i]);
            }
            if(x[i]=='*' || x[i]=='/'){
                while(isnull1==0 && (stack1[top1]=='*' || stack1[top1]=='/' || stack1[top1]=='^')){
                    push2(pop1());
                }
                push1(x[i]);
            }
            if(x[i]=='^'){
                while(isnull1==0 && stack1[top1]=='^'){
                    push2(pop1());
                }
                push1(x[i]);
            }
            if(x[i]==')'){
                while(isnull1==0 && stack1[top1]!='('){
                push2(pop1());
                }
                pop1();
            }
        }
        }
    while(isnull1==0){
        push2(pop1());
    }
    for(int i=0;i<=top2;i++){
        out<<stack2[i]<<" ";
    }
    return 0;
}