# ITSA-Basic 第五題
```C++
#include <iostream>

using namespace std;
int main()
{
    int decimal, binary[8] = { 0 }, i;

    cin >> decimal;  //輸入十進位

    if (decimal < 0) {  //如果輸入為負數，用1的補數計算
        decimal += 256;
    }
    for (i = 7; i >= 0; i--) {   //除2取餘，逆向排列法計算
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }
    for (i = 0; i <= 7; i++) {   //顯示二進位結果
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
```
