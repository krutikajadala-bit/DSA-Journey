#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int space=n-i-1;space>0;space--){
            cout<<" ";
        }
        for(int j=0 ; j<=i ; j++){
            cout<<char(65+j);
        }
        for(int j=i;j>=1;j--){
            cout<<char(64+j);
        }
        cout<<endl;
    }
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