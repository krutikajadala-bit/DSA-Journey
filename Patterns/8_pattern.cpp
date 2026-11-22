#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0 ; i<n-1;i++){
        for(int j=0;j<(n-1)-i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return;
}

int main() {
   int test;
   cin>>test;
   for(int i=0 ;i<test;i++){
    int n;
    cin>>n;
    pattern1(n);
   };
    return 0;
}