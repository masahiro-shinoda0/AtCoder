#include <iostream>
using namespace std;

int main(){
    int n;
    int T[35];

    int first = 200, second = 200, third = 200;
    int first_i = 1, second_i = 1, third_i = 1;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> T[i];
    }

    for(int i=0; i<n; i++){
        if(first > T[i]){
            first = T[i];
            first_i = i;
        }
    }

    for(int i=0; i<n; i++){
        if(second > T[i] && T[i]!=first){
            second = T[i];
            second_i = i;
        }
    }

    for(int i=0; i<n; i++){
        if(third > T[i] && T[i]!=first && T[i]!=second){
            third = T[i];
            third_i = i;
        }
    }

    cout << first_i  + 1 << " " << second_i  + 1 << " " << third_i  + 1 << endl;

    return 0;
}