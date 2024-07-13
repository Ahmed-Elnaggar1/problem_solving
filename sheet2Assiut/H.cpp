#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
    if (x <= 1) {
        cout << "NO";
    }
    else if (x <= 3) {
        cout << "YES";
    }
    else if (x % 2 == 0 || x % 3 == 0) {
        cout << "NO";
    }
    else
    {
        int flag = 0;

        for (int i = 5; i * i <= x; i++) {
            if (x % i == 0) {
                flag = 1;
            }
        }
        if (flag)
            cout << "NO";
        else
            cout << "YES";
    }
    
    return 0;
}