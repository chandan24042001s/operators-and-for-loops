#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    int next=0;
    for(int i=1;i<=10;i++){
        next=a+b;
        cout<<next;
        a=b;
        b=next;
    }
}