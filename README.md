# ITSA-Basic 第四題
```C++
#include <iostream>
using namespace std;
int main()
{
    int hour, minute, hour1, minute1, totalmin = 0, money = 0;

    cin >> hour >> minute;    //輸入起始時間
    cin >> hour1 >> minute1;  //輸入結束時間

    totalmin = (hour1 - hour) * 60 + (minute1 - minute);  //計算共停了多少時間
    if (totalmin <= 120)        //11~16行，計算停車費
        money = totalmin / 30 * 30;
    else if (totalmin <= 240)
        money = 120 + (totalmin - 120) / 30 * 40;
    else
        money = 120 + 160 + (totalmin - 240) / 30 * 60;
    cout << money << endl;  //顯示停車費金額

    return 0;
}
```
