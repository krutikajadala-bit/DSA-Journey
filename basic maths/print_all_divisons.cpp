# include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    vector<int>ls;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"all the divisions of the given number "<<n<< " is"<<endl;
    // for (int i=1; i<=n; i++){
    //     if(n % i ==0){
    //         cout<<i<<endl;
    //     }
    // }// this takes the O(N) time complexity
    //O(sqrt(n))
    for(int i=1 ; i*i<=n ;  i++){  //for(int i=1 ; i<=sqrt(n) ;  i++)
        if(n % i == 0){
            ls.push_back(i); // vector is used
            if((n/i != i)){
                ls.push_back(n/i);
            }
        }
}
// O(no of factors log (no of factors))
sort(ls.begin(),ls.end());
// O(no of factors )
for(auto it:ls) cout<< it <<" ";

return 0;
}
