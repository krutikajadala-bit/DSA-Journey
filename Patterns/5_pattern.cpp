#include<iostream>
using namespace std;

void pattern(int n){
     for(int i=0;i<n;i++){
        for(int space=n-i-1 ;space>0; space--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1 ;j=j+1){
            cout<< '*';
        }
         for(int space=n-i-1 ;space>0; space--){
            cout<<" ";
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
    pattern(n);
   };
    return 0;
}
