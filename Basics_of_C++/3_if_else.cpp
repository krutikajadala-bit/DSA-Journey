# include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<"enter your Age :";
    cin >> age;
    if( age >= 18){
        cout<<"you are adult"<<endl;
    }
    else if(age == 0 | age < 0 ) {
        cout << "you enterd the invalid age!!"<<endl;
    }
    else{
        cout << "you are not adult"<<endl;

    }
    return 0;
}