// calc_sum.cpp を関数を使って実装
#include <iostream>
#include <vector>
using namespace std;

// 関数のプロトタイプ宣言
int calc_sum(int n, vector<int> A){
    // int calc_sum(int n, vector<int>& A){}のようにして参照渡しでもよい
    // 和を計算
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
    }

    // 和を返す
    return sum;
}

int main()
{
    int n;
    vector<int> A(n);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    /*
    // これでもよい
    int n;
    vector<int> A;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    */

    // 計算
    int ans = -1;
    ans = calc_sum(n, A);

    // 出力
    cout << ans << endl;

    return 0;
}
