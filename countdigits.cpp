#include <iostream>
using namespace std;
int countDigits(int n){
        
        int count = 0;
        while (n>0){
            cout << "Current n: " << n << endl; // Debug statement
            count = count + 1;
                n = n/10;
        }
        return count;
}
        
 int main(){
    
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    int Digitcount = countDigits(n);
    cout<<"Number of digits"<<Digitcount<<endl;

return 0;
}
