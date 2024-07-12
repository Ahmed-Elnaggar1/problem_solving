#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	if (letter == 'z')
	{
		cout << 'a' << endl;
	}
	else
	{
		cout << ++letter << endl;
	}
	return 0;

}
