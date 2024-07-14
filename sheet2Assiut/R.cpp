#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, M;
    cin >> N>> M;
    int sum = 0;
    while (N > 0 && M > 0)
    { 
        for (int i = min(N, M); i <= max(N, M); i++)
        {
            cout << i << " ";
            sum = sum + i;
        }
        cout << "sum =" << sum << endl;
        sum = 0;
        cin >> N >> M;
    }
    return 0;
}
