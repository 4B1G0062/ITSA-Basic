#include <iostream>

using namespace std;
int main()
{
    int decimal, binary[8] = { 0 }, i;

    cin >> decimal;
    if (decimal < 0) {
        decimal += 256;
    }
    for (i = 7; i >= 0; i--) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }
    for (i = 0; i <= 7; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
