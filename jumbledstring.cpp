#include <bits/stdc++.h>
using namespace std;

string newString(string s)
{
    int part_length =s.length()/3;

    string a = s.substr(0, part_length);
    string b = s.substr(part_length, part_length);
    string c = s.substr(2* part_length, part_length);

    return c + a + b;
}   

int main()
{
    string s;
    getline(cin, s);
    string result = newString(s);
    cout <<result;
    return 0;

}

