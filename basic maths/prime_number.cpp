#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,cnt=0;
    cout<<"Enter a number:";
    cin>>n;
    // Brute force approch  - O(n)
    // for(int i=1 ; i<=n ; i++){
    //     if(n%i == 0){
    //         cnt++;
    //     }
    // }
    //square root approch - O(sqrt(n))
    for(int i=1 ; i<=sqrt(n);i++){
        if(n%i == 0) {
            cnt++;
            if((n/i != i)) cnt++;
        }
    }
    if(cnt==2) cout<< "given number is prime";
    else cout<<"given number is not prime";

}
