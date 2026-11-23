#include<bits/stdc++.h>
using namespace std;

void explainvector(){
    vector<int> v ;

    v.push_back(1);
    v.emplace_back(2); 
    /* the emplace_back() is similliar to push_back bcz it is dynamically add the Number at the back and it 
                        is generally faster than the puch_back()   */
vector<pair<int,int>>vec;

vec.push_back({1,2});
vec.emplace_back(1,2);

vector<int> v1(5,100);  
//this tells us that in the vector container containing 5 instances of 100  which is already defined  

vector<int> v2(5);
// when you don't want to declare the vector with 100 then declare with this v(size)
// after that this will create the container containing of size number of instances of 0 or any garbage value 

vector<int>v3(5,20); // this will means like : {20,20,20,20,20}  
vector<int>v4(v3); // the v4 is just the another container that copy of the the v3

// remember, we can increase the size of the vector even after the declaration of the size  that we did during the declaration
//  we can access the vector through the v[inded] like we did in array or v.at(index) and another way is through iterator

vector<int>::iterator it = v.begin();
// here v.begin() refer to the memory not to the element because iterator basically menas that it points to the memory address
// so if i print the v.begin() then it will show the memory address not the the element so for the element in that we use the 
// *(v.begin()).. 
it++;
cout<<*(it)<<endl;
it=it+2;
cout<<*(it)<<endl;
// we also have other iterator than the begin() is shown below:
// for understanding all that juat take this example: {10,20,30,40} as a vector
vector<int>::iterator it1 =v.end();
// so in this it points to the memory location that is right after the 40 in above example and so getting the vector
// last element we have to do it-- so flow is something like this: end -> 40 -> 30 -> 20 -> 10
vector<int>::reverse_iterator it2 = v.rend();
// it works according to its name Reverse end so now it is Pointing  to the the poistion just before the First element
// so now 'it' points to befor the 10 so flow is : start -> 10 -> 20 -> 30 -> 40
vector<int>::reverse_iterator it3=v.rbegin();
//  it is like the reverse vector of the original one and yes now int this 'it' points to the last element of the Array
// SO when i will just do it++ then move Ahed in Backward direction like Now it is pointing to the 40 so then after 
// updation it will move to 30 So in this it becomes completely reverse of original vector 
// so flow is like this: 40->30->20->10

cout<<v[0] <<" " << v.at(0)<<endl;
// it is easiest way to access the element in the vector is v[index] 
cout<<v.back()<<" ";
// this will give the element which is at last in the vector in given example ,it gives 40

// the way of printing all the elements in the vector is using the loop:
for(vector<int>::iterator it=v.begin(); it != v.end() ; it++){
    cout<<*(it)<<" ";
} 
cout<<endl;

// another short approch is : auto ... SO 'auto' is the thing we can write instead of the datatype means
// we will write int a=5; or auto a=5 then it will automatically references to the a
// so in that without writing the all the Description of Vector Datatype ,we can write the 'auto'

for(auto it1 = v.begin(); it1!= v.end() ;it1++){
    cout<<*(it1)<<" ";
}
cout<<endl;
 
// another apprich is auto each loop means that 'it on v' and auto it : v references that it will return the integer 
// value that is in the vector  ... so the auto will iterate on the datatype not for the iterator
for(auto it :v){
    cout<<it<<" ";
}
cout<<endl;

//{10,20,12,23} 
v.erase(v.begin()+1); // this will give {10,12,23}

// When we want to delete the couple of the element so give the starting address first and give the Address of 
// the element that is just right after the last delete element
// so take example is : {10,20,12,23,35}
 v.erase(v.begin()+2 ,v.begin()+4); // {10,20,35}  v.erase[start,end)

//Insert functions
vector<int>x(2,100); //{100,100}
x.insert(v.begin(),300); //{300,100,100}
x.insert(v.begin()+1,2,10); //{300,10,10,100,100}

vector<int> copy (2,50);
x.insert(x.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

//{10,20}
cout<<v.size()<<endl; //2

//{10,20}
v.pop_back(); // {10}

// v1 -> {10,20}
// v2 -> {30,40}
v1.swap(v2); // v1 ->{30,40} v2->{10,20}

v.clear() ;// erases the entire vector

cout<<v.empty() ;// if the vector is empty then it returns the true ... otherwise it gives false
}
int main(){

    return 0;
}
