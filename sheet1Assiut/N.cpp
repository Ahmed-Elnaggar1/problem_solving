 
 
#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (x >= 'a' && x <= 'z')
		x -= 32;
	else
		x += 32;
	cout << x << endl;
	return 0;
}