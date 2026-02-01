#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int sum = 0;

    

    int i = 0;
    while(true)
    {
        if(sum>=k) break;
        sum = sum + i + n;

        //if(sum>=k) break;
        i = i + 1;
    }

    cout << i-1 << endl;

    return 0;
}