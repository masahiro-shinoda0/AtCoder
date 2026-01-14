#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // 書き込み用のファイルを生成
    ofstream out("output.txt")
  
    int n=1000;
    out << n << endl;
    for(int i=0; i<n; i++){
        out << i+1;
        if(i!=n-1) out << " ";
    }

    out.close();
      
    return 0;
}
