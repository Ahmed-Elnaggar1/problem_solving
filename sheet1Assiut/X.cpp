#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int start, end;
	if ((c < a && d < a) || (c > b && d > b))
	{
		cout << -1 << endl;
	}
	else
	{
		if (a > c)
			start = a;
		else
			start = c;
		if (b > d)
			end = d;
		else
			end = b;
		cout << start << " " << end << endl;
	} 
	return 0;

}
