#include<iostream>
using namespace std;

void pattern2(int n){
    for (int i=0; i<n;i++){
        for(int space=0;space<i;space++){
            cout<<" ";
        }
        for(int j=2*n-2*(i)-1;j>0;j--){
            cout<<"*";
        }
        for(int space=0;space<i;space++){
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
    pattern2(n);
   };
    return 0;
}