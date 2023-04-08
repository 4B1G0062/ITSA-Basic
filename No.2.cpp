#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, j = 0, count = 0;
    string keyword, data, temp;

    cin >> keyword;
    cin >> data;

    for (i = 0; i < data.length() - keyword.length() + 1; i++) {
        for (j = 0; j < keyword.length(); j++) {
            temp = temp + data[i + j];
        }

        if (temp == keyword) {
            count += 1;
        }

        temp = "";
    }

    cout << count << endl;

    return 0;
}