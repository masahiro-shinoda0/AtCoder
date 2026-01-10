#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int ans = 1;
    ans = x;

    for(int i=0; i<y; i++){
        ans *= 2;
    }

    cout << ans << endl;

    return 0;
}
