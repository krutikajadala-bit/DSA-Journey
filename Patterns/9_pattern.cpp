#include<iostream>
using namespace std;

void pattern1(int n){
   for(int i=1 ; i<=n ;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2 != 0) {
            cout<<'0';
        }
        else{
            cout<<'1';
        }
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