# ITSA-Basic 第三題
```C++
#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
    int x, y;

    cin >> x >> y;  //輸入點的座標

    if (sqrt((x * x) + (y * y)) <= 100)  //使用距離公式判斷點是否在半徑100的圓中
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

    return 0;
}
```
