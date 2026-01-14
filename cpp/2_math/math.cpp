#include <iostream>
#include <cmath>
#include <limits> // エラー処理
using namespace std;

int main()
{
    double n;

    while(true){
        cout << "input n: ";
        cin >> n;
        if(!n){
            cout << "n is NaN" << endl;
            cin.clear(); // リセット
            // バッファにある不正な文字を最後まで読み飛ばす
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "pow(n,2) = " << pow(n,2) << endl;
        cout << "sqrt(n,2) = " << sqrt(n) << endl;
        cout << "abs(n) = " << abs(n) << endl;
        cout << "sin(n) = " << sin(n) << endl;
        cout << "cos(n) = " << cos(n) << endl;
        cout << "tan(n) = " << tan(n) << endl;
        cout << "exp(n) = " << exp(n) << endl;
        cout << "exp2(n) = " << exp2(n) << endl;
        cout << "log(n) = " << log(n) << endl;
        cout << "log10(n) = " << log10(n) << endl;

        cout << endl;
        cout << "continue?[y/n]" << endl;
        string s;
        cin >> s;
        if(s=="n" || s=="N") break;
        cout << endl;
    }

    return 0;
}