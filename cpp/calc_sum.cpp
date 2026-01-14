#include <iostream>
using namespace std;

int main(){
    int n; // 要素数
    int A[n];
    // 入力
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    // 和を計算
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
    }
    cout << sum << endl;

    return 0;
}
