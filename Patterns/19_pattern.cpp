#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<2*n;i++){
        if(i==0 || i==2*n-2){
           for(int j=0;j<n-1;j++){
            cout<<"*";
           }
        }
        else{
            if(i%2==0){
                cout<<"*";
                for(int j=0;j<n-3;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            else{
                for(int j=0;j<n-1;j++){
                    cout<<' ';
                }
            }
        }cout<<endl;
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