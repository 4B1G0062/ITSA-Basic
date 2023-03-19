#include <iostream>
using namespace std;

int main()
{
    int m = 0, n = 0, i, j, num;
    int array[100][100];
    cin >> m >> n;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> num;
            array[j][i] = num;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\b " << endl;
    }

    return 0;
}