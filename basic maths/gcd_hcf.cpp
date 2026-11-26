#include<bits/stdc++.h>
using namespace std;
int Euclidean_approch(int n1,int n2){
    while(n1 > 0 && n2 > 0){
        if(n1 >n2) n1 = n1 % n2;
        else   n2 = n2 % n1;
    }
    if(n1 == 0){
        return n2;
    }
    else if (n2==0){
        return n1;
    }
}
int main(){
    int n1 , n2;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    //Brute force aproch - O(min(n1,n2))
    // int gcd =1;
    // for(int i=1 ;i<=min(n1 , n2); i++){   // for(int i= min(n1,n2);i>0;i--)
    //     if(n1%i ==0 && n2%i==0 ){        //  if(n1 % i==0 && n2%i ==0)
    //         gcd = i;                    //          gcd = i;
    //     }                               //          break;
//    }
   cout<<"the gcd is "<< Euclidean_approch(n1 ,n2);
return 0;
}

