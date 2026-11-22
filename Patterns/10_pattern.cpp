#include<iostream>
using namespace std;

void pattern1(int n){
   for(int i=0;i<n;i++){
    int a=1;
    for(int j=0;j<=i;j++){
        cout<<j+1;
    }
    for(int space=2*n-2*i-2;space>0;space--){
        cout<<" ";
    }
    for(int j=i+1;j>0;j--){
        cout<<j;
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