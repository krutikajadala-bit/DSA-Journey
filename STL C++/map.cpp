#include<bits/stdc++.h>
using namespace std;
void explainMap(){
    // Map is the one who stores the element in the form of key-value pairs, 
    // where each key is unique and is used to access its corresponding value.
    // By default, a map stores its keys in ascending sorted order.
    // the data type of key and value be any such as int,char,pair or string
    map<int,int> mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int>mpp2;
    mpp[1]=2;
    mpp.emplace(2,4);
    mpp.insert({3,1});
    // it stores the element in the map mpp is like in this manner:
    // {{1,2},{2,4},{3,4}}
    mpp2[{2,3}] = 10; // {{2,3},10}}
    
    //for traverse in map ....
    for(auto it:mpp){
        cout<<it.first <<" "<<it.second;
    }
    cout<<endl;

    cout<<mpp[2]; // it gives the value 4 
    cout<<mpp[5]; // it gives the null or 0 because the key 5 is not there in the map

    // for gettinng the particular {key,value} pair in the map we have to use the iterator 
    // so that we can access the particular value of the key through iterator..
    auto it = mpp.find(3);
    cout<< (*it).second<<endl;

    auto it1 = mpp.find(5);
    // in this the key = 5 is not there in the map mpp so it points to the the mpp.end() 
    // just right after the last key element in the map 

    auto i1 = mpp.lower_bound(2);
    auto i2 = mpp.upper_bound(3);

    //erase , swap ,size , empty ,are some as above

}

int main(){

    return 0;
}