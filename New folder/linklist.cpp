#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* newnode(int a){
    node* p= new node;
    p->data=a;
    p->next=NULL;
    return p;
}
node* addfirst(node* &head, int x){
    node* p= newnode(x);
    p->next=head;
    head=p;
    return p;
}
node* addlast(node* &head, int x){
    node* p=newnode();
    if(head==NULL){
        head=p;
    }else{
        node* head1=head;
        while(head1->next!=NULL){
            head1=head1->next;
        }
        head1->next=p;
    }
    return p;
}
void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* find(node* head, int x, int n){
    if(n<=0){return NULL;}
    int i=0;
    while(head!=NULL){
        if(head->data==x){
            i++;
            if(i==n){
                return head;
            }
        }
        head=head->next;
    }
    return NULL;
}
node* deletefirst(node* &head){
    if(head==NULL){return head;}
    node* head1=head;
    head=head->next;
    delete head1;
    return head;
}
node* deletelast(node* &head){
    if(head==NULL){return head;}
    node* head1=head;
    if(head1->next==NULL){
        delete head1;
        head=NULL;
        return head;
    }
    while(head1->next->next!=NULL){head1=head1->next}
    delete head1->next;
    head1->next=NULL;
    return head1;
}
node* findback(node* head, int x, int n){
    if(n<=0||head->data==x){return NULL;}
    int i=0;
    while(head->next!=NULL){
        if(head->next->data==x){
            i++;
            if(i==n){
                return head;
            }
        }
        head=head->next;
    }
}
    return NULL;
void deletevalue(node* &head, int x, int n){
    if(n<=0){return;}
    node* p=find(head,x,n);
    if(p==NULL){return;}
    if(p==head){deletefirst(head);}
    else {
    node* p1=findback(head,x,n);
    node* c = p1->next;
    p1->next = c->next;
    delete c;
}
    /*else{
        if(p->next==NULL){
        node* c=p1->next;;
        p1->next=NULL;
        delete c;
        }else{
        node* c=p1->next;
        p1->next=p1->next->next;
        delete c;
    }
    }*/
    
}