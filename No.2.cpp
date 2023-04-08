#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i;
    string input, temp;
    vector<string> str;

    getline(cin, input);

    for (i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = (char)(input[i] + 32);
        }

        if (input[i + 1] != ' ') {
            temp = temp + input[i];
        }
        else {
            str.push_back(temp);
        }
        
    }
    cout << input << endl;

    return 0;
}
