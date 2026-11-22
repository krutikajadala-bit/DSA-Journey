#include<iostream>
using namespace std;

void pattern(int n){
     for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
     }
    return;
}
void pattern2(int n){
     for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
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