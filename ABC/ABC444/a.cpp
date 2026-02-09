#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    s = to_string(n);

    char k = s[0];
    for(int i = 0;i<s.size(); i++){
        if(k!=s[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}