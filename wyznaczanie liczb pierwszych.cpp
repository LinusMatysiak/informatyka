#include <iostream>
using namespace std;

int main()
{
    int lp = 0;
    int p = 2;
    int n = 0;
    cout << "wpisz ile liczb pierwszych wygenerować \n";
    cin >> n;
    while (lp < n) 
    {
        for (int d=2; d<=p-1; d++) 
        {
            if (p % d == 0) 
            {
                p = p + 1;
            }
        }
        cout << p << " ";
        lp = lp + 1;
        p = p +1;
    }
}