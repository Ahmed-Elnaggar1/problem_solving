#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Handle the edge case where N is 0 or negative
    if (N <= 0) {
        cout << "Invalid input. N must be a positive integer." << endl;
        return 1;
    }

    // Print the first N Fibonacci numbers
    long long a = 0, b = 1, c;
    for (int i = 1; i <= N; ++i) {
        if (i == 1) {
            cout << a << " ";
        } else if (i == 2) {
            cout << b << " ";
        } else {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    cout << endl;

    return 0;
}
