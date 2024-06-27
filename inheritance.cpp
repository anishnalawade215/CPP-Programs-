#include<iostream>
using namespace std;

class stuff{
    public :
        char name[10];
};

class Input : public stuff
{
    private:
        int speed;

    public:

        void getdata()
        {
            cout<<"Enter the name";
            cin >> name;

            cout << "Enter the speed";
            cin>>speed;

        }
        void display()
        {
            cout << " The name is" << name << endl;
            cout << " The speed is" << speed << endl;
        }
};

int main()
{
    Input t;
    t.getdata();
    t.display();
    return 0;
}