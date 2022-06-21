#include <iostream>
using namespace std;

/*

a + b = n
a - b = m

(a + b) + (a - b) = n + m = 2a

(a + b) - (a - b) = n - m = 2b

*/

int main()
{
	int n, m;
	int a, b;

	cin >> n >> m;

	a = (n + m) / 2;
	b = (n - m) / 2;

	cout << a << endl;
	cout << b;

	return 0;
}