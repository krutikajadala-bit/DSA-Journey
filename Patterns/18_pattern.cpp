#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int space=2*n-2*i-1;space>0;space--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int space=0;space<=2*i+2;space++){
            cout<<" ";
        }
        for(int j =0;j<n-1-i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
       
    return;
}
int main(){
    int test;
    cin>> test;
    for(int i =0 ;i<test;i++){
        int n ;
        cin>>n;
        pattern(n);
    }
    cout<<endl;
    return 0;
}