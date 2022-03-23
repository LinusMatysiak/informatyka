#include <iostream>
using namespace std;

int main()
{
	int a, b, c, nww;
	cin >> a;
	cin >> b;
	c = a * b;
	while (a != b) {

		if (a < b)
		{
			b = b - a;
		}
		else
		{
			a = a - b;
		}
	}
	nww = c / a;
	cout << nww;
}