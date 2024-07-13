#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    cout << A;
    return 0;
}
