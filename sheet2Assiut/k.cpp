// to make time complexity o(root n) and space complexity o(1)
// two loops for 1 to sqrt N and llop from sqrt N to 1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sqrtN = sqrt(N);
    for (int i = 1; i <= sqrtN; ++i) {
        if (N % i == 0) {
            cout << i << endl;
        }
    }

    for (int i = sqrtN; i >= 1; --i) {
        if (N % i == 0 && i != N / i) {
            cout << N / i << endl;
        }
    }
    cout << endl;
    return 0;
}
