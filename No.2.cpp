#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string a;
    
    cin >> a;

    string b(a.rbegin(), a.rend());

    if (a == b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}