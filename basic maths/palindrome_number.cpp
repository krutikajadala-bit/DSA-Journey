#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int dup = n;
    int reverse =0, last;
    while(n>0){
        int last = n % 10;
        reverse = reverse * 10 +last;
        n = n / 10 ;
    }
    cout <<reverse<<endl;
    if(reverse == dup) cout<<"Given number is palindrome";
    else cout <<" given number is not palindrome"<<endl;
    return 0;
}