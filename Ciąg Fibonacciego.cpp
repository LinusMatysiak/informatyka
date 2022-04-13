#include <iostream>
using namespace std;
int main()
{
    int n;
    int F0;
    int F1;
    int F;
    cout << "ile liczb chcesz wypisać ";
    cin >> n;
    F0 = 0;
    F1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 1)
        {
            F = F0 + F1;
            F0 = F1;
            F1 = F;
        }
        else
        {
            F = i;
        }
        cout << F << " ";
    }
}