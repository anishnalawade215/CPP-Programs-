#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    
    pair<int, int> p = {1,3};
    
    cout<<p.first<<" "<< p.second;
    
    pair<int, pair<int, int>> p = {1,{1,4}};
    
    cout<<p.first<<" "<< p.second.second<<" "<< p.second.first;
    
    pair<int, int> arr[]= {{1,4},{4,6},{7,5}};
    
    cout<<arr[2].second;
}