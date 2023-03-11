#include <iostream>
using namespace std;
int main()
{
    int hour, minute, hour1, minute1, totalmin = 0, money = 0;

    cin >> hour >> minute;
    cin >> hour1 >> minute1;

    totalmin = (hour1 - hour) * 60 + (minute1 - minute);
    if (totalmin <= 120)
        money = totalmin / 30 * 30;
    else if (totalmin <= 240)
        money = 120 + (totalmin - 120) / 30 * 40;
    else
        money = 120 + 160 + (totalmin - 240) / 30 * 60;
    cout << money << endl;

    return 0;
}
