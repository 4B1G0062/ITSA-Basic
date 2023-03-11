#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string a, b, temp = { 0 };

    cin >> a;
    cin >> b;
    for (int i = 0; i < a.length() - b.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            temp[j] = b[i];
        }
        if (temp == a) {
            count += 1;
        }
        temp = { 0 };
    }
    cout << count << endl;

    return 0;
}