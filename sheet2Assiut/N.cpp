#include <iostream>
#include <string>
using namespace std;
 
int main() {
    char S;
    int N;
    cin >> S >> N;
 
    while (N--)
    {
        int num;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cout << S;
        }
        cout<<endl;
    }
    return 0;
}