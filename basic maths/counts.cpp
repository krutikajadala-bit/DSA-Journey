# include<bits/stdc++.h>
using namespace std;
int count(int n){
    int c=0;
    while (n > 0){
       c = c+1 ;
       n = n/10;
    }
    return c;
}
int main(){
    int n;
    cout<<"Entet a number:";
    cin>>n;
    //another method of exteacting digits of number
    int c = (int)(log10(n)+1);
    cout<<"the count of digit of given number "<<n<<" is "<< c;
return 0;
}
// because in the loop , the number is divide by 10 .so its time complexity is log10(n)
// whenever the number of iteration depends on division , that is when logrithmic came in time complexity