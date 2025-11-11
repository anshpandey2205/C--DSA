#include<iostream>
#define max 5
using namespace std;
struct stack{
    int data[max];
    int top;
};
stack s,*p;
void init(){
    p=&s;
    p->top=-1;
}
int empty(){
    if(p->top==-1)
        return 1;
    else
        return 0;
}
int full(){
    if(p->top==max-1)
        return 1;
    else
        return 0;
}
void push(int x){
    if(full()){
        p->top++;
        p->data[p->top]=x;
    }
}
