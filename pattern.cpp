#include <iostream>
using namespace std;

void pypart(int n) {
    int i, j, k = n;

    for (int i = 0; i <=5; i++) {
        for (int j = 0; j <= 5; j++) {
            if (j >= k)
            cout<< " *";
            else
            cout<< " ";
        }
        k--;
        cout<< "\n";
    }
}

int main() {
    int n = 5;
    pypart(n);
    return 0;
}

//upside down pyramid 

// #include<iostream>
// using namespace std;
// void pypart(int n){
    
//     int k=0;
    
//     for (int i=n; i>0; i--){
//         for(int j=0; j<n; j++){
            
//             if (j<k)
//             cout<<" ";
//             else
//             cout<<"* ";
//         }
//         k++;
//         cout<<"\n";
//     }
// }

// int main(){
//     int n=7;
//     pypart(n);
//     return 0;
    
// }
