# include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int last , reverse =0 ;
    while(n > 0){
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n/10;
    }    
    return reverse;
}
int main(){
    int n;
    cout<<"Entet a number:";
    cin>>n;
    
    cout<<"the reverse of the given number "<<n<<" is "<< reverse(n);
return 0;
}
// because in the loop , the number is divide by 10 .so its time complexity is log10(n)
// whenever the number of iteration depends on division , that is when logrithmic came in time complexity