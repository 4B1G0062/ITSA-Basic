#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j;
    string input;
    string keystrole = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";

    getline(cin, input);

    for (i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = (char)(input[i] + 32);
        }
    }
    
    for (i = 0; i < input.length(); i++) {
        for (j = 0; j < keystrole.length(); j++) {
            if (input[i] == keystrole[j]) {
                input[i] = keystrole[j + 1];
                break;
            }
        }
    }
    cout << input << endl;

    return 0;
}