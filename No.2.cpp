#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float  mile = 0.0, kilometer=0.0;
    cin >> mile;
    kilometer = mile * 1.6;
    cout << fixed << setprecision(1) << kilometer << endl;
    return 0;
}
