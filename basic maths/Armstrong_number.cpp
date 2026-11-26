#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int dup = n;
    int last , sum =0;
    while(n>0){
        last = n % 10;
        sum = sum + pow(last,3);
        n = n /10;
    }
    if(sum = dup ){
        cout<<"Given number is Armstrong Number";
    }
    else{
        cout<<"Given number is not Armstrong number";
    }
    return 0;
}