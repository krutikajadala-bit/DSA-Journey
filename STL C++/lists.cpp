#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int>  ls;
     ls.push_back(2);//{2}
     ls.emplace_back(4);//{2,4}

     ls.push_front(5);// {5,2,4};
     ls.emplace_front(3);//{3,5,2,4}

    // rest all the functions are same as vector 
    // begin ,end, rbegin,rend,clear , insert ,swap,size
}


int main(){

    return 0;
}
// Insert function is very costly in vector and in the list since the internal operations are  tuplly linked list 
// is maintened for list  and singly linkedlist is for vector so that push_front is very very cheap as a timecomplexit with
// compare to the vector