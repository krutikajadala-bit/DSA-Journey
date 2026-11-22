#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i=0; i<n;i++){
        for(int space=n-i-1;space>0;space--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        for(int space=n-i-1;space>0;space--){
            cout<<" ";
         }
         cout<<endl;
    }
    for(int i=0 ; i<n-1 ;i++){
        for (int space = 0; space < i+1 ; space++){
            cout<<" ";
        }
        for(int j=2*n-2*i-3 ; j>0 ;j--){
            cout<<"*";
        }
        for(int space=0;space<i+1 ;space++){
            cout<< " ";
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