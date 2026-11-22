#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=i ;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
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