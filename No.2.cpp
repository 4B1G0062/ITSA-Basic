#include <iostream>  
#include <string>  
using namespace std;

int main(int argc, char** argv) {
    int count = 1;
    int lettor[26] = { 0 };
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lettor[str[i] - 'A']++;
        }

        if (str[i] >= 'a' && str[i] <= 'z') {
            lettor[str[i] - 'a']++;
        }

        if (str[i] == ' ') {
            count++;
        }
    }

    cout << count << endl;
    for (int j = 0; j < 26; j++) {
        if (lettor[j] != 0) {
            cout << (char)(j + 'a') << " : " << lettor[j] << endl;
        }
    }

    return 0;
}