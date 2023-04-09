#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i, j;
    string input, temp, output;
    vector<string> str;

    getline(cin, input);

    for (i = 0; i < input.length(); i++) {  //大寫轉小寫
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = (char)(input[i] + 32);
        }

        if (input[i] != ' ') {
            temp = temp + input[i];
        }
        else {
            str.push_back(temp);
            temp = "";
        }
    }
    str.push_back(temp);

    for (i = str.size() - 1; i >= 0; i--) {  //比較是否一樣
        for (j = 0; j < str.size(); j++) {
            if (i == j) {
                continue;
            }
            else {
                if (str[i] == str[j]) {
                        str[i] = "";
                }
            }
        }
    }

    for (i = 0; i < str.size(); i++) {  //輸出結果存入output，最後有空白" "
        if (str[i] == "")
            continue;
        else {
            output += str[i] + " ";
        }
    }

    for (i = 0; i < output.length() - 1; i++) {  //輸出結果最後沒有空白" "
        cout << output[i];
    }
    cout << endl;

    return 0;
}
