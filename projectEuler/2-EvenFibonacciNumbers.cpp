#include <iostream>
using namespace std;

int main() {
    long long term1 = 1;
    long long term2 = 2;
    long long sum = 0;
    sum += term2;

    while (true) {
        long long nextTerm = term1 + term2;

        if (nextTerm > 4000000) {
            break;
        }

        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }

        term1 = term2;
        term2 = nextTerm;
    }

    cout << sum << endl;

    return 0;
}
