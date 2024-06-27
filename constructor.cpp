//constructor with default arguments 
#include<iostream>
using namespace std;

class Simple 
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 10)
    {
        data1 = a;
        data2 = b;
        data3 = c;
        }

        void printData();
};

        void Simple :: printData()
        {
            cout << "The value of data 1, 2, 3 is" <<endl << data1 << endl << data2 << endl << data3 << endl;
        }
            int main()
            {
                Simple s(1);
                s.printData();
                return 0;
            }