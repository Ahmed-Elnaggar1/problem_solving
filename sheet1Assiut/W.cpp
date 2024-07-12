#include <iostream>
using namespace std;
void validate(int result, int res)
{
	if (result == res)
		cout << "Yes" << endl;
	else
		cout << res << endl;
	return;
}
int main()
{
	int a, b,result;
	char s,z;
	int res;
	cin >> a >> s >> b>>z>>result;
	if (s == '+')
	{
		res = a + b;
		validate(result, res);
	}
	else if (s == '-' )
	{
		res = a - b;
		validate(result, res);
	}
	else if (s == '*')
	{
		res = a * b;
		validate(result, res);
	}

	return 0;

}
