#include <iostream>
using namespace std;

int result(int a, int b) {
    if (b == 0)
        return a;

    return result(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << result(a, b) << endl;

    return 0;
}