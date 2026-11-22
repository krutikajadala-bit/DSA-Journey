#include<iostream>
using namespace std;

void pattern1(int n){
    int a=1;
 for(int i=0; i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<a;
        a=a+1;   
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