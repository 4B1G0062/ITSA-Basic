#include <iostream>

using namespace std;
int main()
{
    int N, i, total = 0;

    cin >> N;
    for (i = 3; i <= N; i++) {
        if (i % 3 == 0) {
            total += i;
        }
    }
    cout << total << endl;

    return 0;
}
