#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ((a == 0) && (b == 0) || abs(a - b) >= 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}