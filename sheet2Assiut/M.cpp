#include <iostream>
#include <string>
using namespace std;

bool isLucky(int num) {
    string numStr = to_string(num);
    for (char c : numStr) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    bool found = false;
    for (int i = A; i <= B; ++i) {
        if (isLucky(i)) {
            if (found) {
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }
    if (!found) {
        cout << "-1";
    }
    return 0;
}
