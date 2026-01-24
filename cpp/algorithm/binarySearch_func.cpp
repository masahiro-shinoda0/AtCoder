#include <iostream>
using namespace std;

int n, x, a[100009];

int search(int x);

int main(){
    cin >> n >> x;
    for(int i=0; i<n; i++) cin >> a[i];

    // 二分探索
    int answer = search(x);
    cout << answer << endl;

    return 0;
}

int search(int x){
    int low = 1;
    int high = n;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(x < a[mid]) high = mid - 1;
        if(x == a[mid]) return mid;
        if(x > a[mid]) low = mid + 1;
    }
    return -1;
}
