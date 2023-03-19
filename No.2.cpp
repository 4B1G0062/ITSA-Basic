#include <iostream>
using namespace std;

int function(int n) {
    if (n == 0 || n == 1) {
        return n += 1;
    }

    if (n > 1) {
        return function(n - 1) + function(n / 2);
    }
}

int main()
{
    int number;
    cin >> number;
    cout << function(number) << endl;

    return 0;
}