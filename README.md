# AtCoder
AtCoderの解いたまとめを記録\
AtCoderのマイページ：[https://atcoder.jp/users/Shin_Sushi](https://atcoder.jp/users/Shin_Sushi)\
AtCoder Problems：[https://kenkoooo.com/atcoder/#/table/Shin_Sushi](https://kenkoooo.com/atcoder/#/table/Shin_Sushi)

[GitHubの使い方](/readme/HowToUseGitHub.md)

## C++
[レファレンス](https://cpprefjp.github.io/reference.html)

### 入出力
入出力には，以下をインクルードする．
```C++
#include <iostream>
```
入力は，例えば整数値のときは次のようにする．
```C++
int x;
std::cin >> x;
```
出力は，以下のようにする．
```C++
std::cout >> x;
```
改行をしたい時は以下のようにする．
```C++
cout << endl;
```
または
```c++
cout << "\n"
```
インクルードのときに，以下のように名前空間を設定すると良い．
```C++
#include <iostream>
using namespace std;
```
こうすることで，`cout::`と書かなくても良い．[`calc_sum.cpp`](/cpp/1_in_out/calc_sum.cpp)では，`for`を使用して，配列を入力し，和を出力する関数を実装している．

### ファイル入出力
ファイル入出力には，ターミナル上で行うものとプログラム上で行うものがある．以下はターミナル上で行うものの例である．まず入力．
```C++
./a.out < input.txt
```
次に出力
```C++
./a.out > output.txt
```

プログラム上でファイルの入出力を行う場合には，`#include <fstream>`とする．まず、ファイルを開くためのストリームを作成．
```C++
ifstream in("input.txt");
```
次のようにエラー処理をしても良い．
```C++
if (!in) {
  cerr << "ファイルが見つかりません" << endl;
  return 1; // 異常終了
}
```
入力には`cin`ではなく`in`を使う．
```C++
int n;
in >> n;
```
プログラム終了を明示的に書いても良い．
```C++
in.close();
```
出力の場合も似たような流れである．まず，書き込み用のファイルを作成する．
```C++
ofstream out("output.txt");
```
書き込みには，`cout`ではなく`out`を使う．
```C++
out << n << endl;
```
プログラム終了を明示的に書いても良い．
```C++
out.close();
```



## Python
[レファレンス](https://docs.python.org/ja/3/reference/index.html)

### 入出力
基本的な入力，出力は`input()`，`print()`関数を使う
```python
n = int(input())
print(n)
```

### 入出力
