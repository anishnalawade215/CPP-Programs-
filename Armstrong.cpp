#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int sum=0;
    int dup=n;

    
    while(n>0){
        int ld=n%10;
        int revnum= (revnum*10)+ld;
        sum = sum + (ld*ld*ld*ld);
        n=n/10;
    }
    if(sum==dup)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    
    return 0;
}