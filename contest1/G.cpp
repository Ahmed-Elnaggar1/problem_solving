#include <iostream>
using namespace std;
int main()
{
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;
    long long counter = 0;
    if (eyes == 0 || body == 0)
    {
        cout << 0;
        return 0;
    }

    if (mouth > 0)
    {
        long long min_ = min(eyes, min(body, mouth));

        counter += min_;
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    if (eyes > 0 && body > 0)
    {
        eyes /= 2;
        long long min_ = min(eyes, body);
        counter += min_;
    }

    cout << counter;
    return 0;
}