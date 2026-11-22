#include<iostream>
using namespace std;
void pattern(int n){
    for (int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
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