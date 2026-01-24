#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>
#include <vector>
using namespace std;
using namespace chrono;

int main(){
    int n, x;
    cin >> n>> x;
    int a[100009];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    auto start = system_clock::now();

    // 全探索
    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout << i+1 << endl;
            break;
        }
    }

    auto end = system_clock::now();

    duration<double> liner_seconds = end - start;

    // 二部探索
    int low = 1;
    int high = n;
    int mid;
    int cnt = 0;
    cout << "x = " << x << endl;
    while(true){
        mid = (low + high)/2;
        cout << "(low, high, mid) = " << low << " " << high << " " << mid << endl;
        if(x > a[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }

        // test

        if(low == high){
            cout << "answer = " << low << endl;
            break;
        }
        cnt++;
        if(cnt > n){
            cout << "無限ループエラー" << endl;
            break;
        }
    }

    cout << "liner_seconds: " << liner_seconds.count() << " s" << endl;

    return 0;
}
