#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cout << "Enter the size of the array";
    cin >> n;

    int a[n];

    cout<<"Enter the elements";
    for (int i = 0; i<n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"array after swapping ";

    for (int i = 0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}