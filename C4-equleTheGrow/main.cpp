#include <iostream>

using namespace std;

int main()
{
    short int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
