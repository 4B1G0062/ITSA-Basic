#include <iostream>
#include <string>
using namespace std;

class Calaulate {
private:
    int real, empty;
public:
    Calaulate(int r = 0, int e = 0) {
        real = r;
        empty = e;
    }

    Calaulate operator + (Calaulate const& obj) {
        Calaulate result;
        result.real = real + obj.real;
        result.empty = empty + obj.empty;
        return result;
    }

    Calaulate operator - (Calaulate const& obj) {
        Calaulate result;
        result.real = real - obj.real;
        result.empty = empty - obj.empty;
        return result;
    }

    Calaulate operator * (Calaulate const& obj) {
        Calaulate result;
        result.real = (real * obj.real - empty * obj.empty);
        result.empty = (real * obj.empty + empty * obj.real);
        return result;
    }

    void dispaly() {
        cout << real << " " << empty << endl;
    }
};

int main()
{
    int n, real_1, empty_1, real_2, empty_2, i;
    char oper;

    cin >> n;
    Calaulate result[10] = { 0 };

    for (i = 0; i < n; i++) {
        cin >> oper >> real_1 >> empty_1 >> real_2 >> empty_2;
        Calaulate a(real_1, empty_1);
        Calaulate b(real_2, empty_2);

        switch (oper) {
            case '+':
                result[i] = a + b;
                break;
            case '-':
                result[i] = a - b;
                break;
            case '*':
                result[i] = a * b;
                break;
        }
        result[i].dispaly();
    }

    return 0;
}
