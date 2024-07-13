// solution 1 is my approach 

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i ++) {
        if (num % i == 0 ) {
            return false;
        }
    }
    return true;
}

void printPrimes(int N) {
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    printPrimes(N);

    return 0;
}


// solution 2 when i searched for a more efficient way
// i understood the "Sieve of Eratosthenes Algorithm:"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bool> prime(N+1, true);

    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= N; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= N; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;

    return 0;
}


