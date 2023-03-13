#include <iostream>

using namespace std;
int main()
{
    int number, i, a = 0;

    cin >> number;
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            a++;
        }
    }
    if (a != 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}