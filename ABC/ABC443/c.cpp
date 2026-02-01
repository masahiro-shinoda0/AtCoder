#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, T;

    vector<int> A;
    cin >> n >> T;

    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        A.push_back(k);
    }

    int t = 0;
    int x = 0;
    int tmp = 0;
    int i_tmp = 0;
    tmp = A[i_tmp];

    while(T>=t){

        if(n!=0){
            if(t>A[i_tmp]){
                while(true){
                    i_tmp++;
                    if(t<=A[i_tmp]) break;
                }
            }

            if(t==A[i_tmp]){
                t += 100;
                if(i_tmp!=n-1) i_tmp++;
                continue;
            }
        }

        
        t += 1;
        x += 1;
    
    }

   
    if(n==0){
        cout << x-1 << endl;
        return 0;
    }

    if( A[n-1]!=T){
        cout << x-1 << endl;
        return 0;
    }

    cout << x << endl;

    return 0;
}