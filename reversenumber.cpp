#include<iostream>
using namespace std;
int main(){
    
    int n;
    int revnum=0;
    cout<<"Enter number :";
    cin>>n;
    
    while(n>0){
        int ld=n%10;
        revnum= (revnum*10)+ld;
        n=n/10;
    }
    cout<<revnum;
    return 0;
}