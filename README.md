# AtCoder
AtCoderの解いたまとめを記録\
[https://atcoder.jp/users/Shin_Sushi](https://atcoder.jp/users/Shin_Sushi)\
[AtCoder Problems](https://kenkoooo.com/atcoder/#/table/Shin_Sushi)\

## クローン
このレポジトリをローカル環境にクローンするには以下を実行．
```
git clone https://github.com/masahiro-shinoda0/AtCoder.git
```

## プッシュ
まず，リモートの変更を取り込む．
```
git pull origin main
```
リモートの変更を確認．
```
git status
```
変更をステージングエリアに追加．
```
git add .
```
変更を記録する．
```
git commit -m "メッセージ"
```
リモートへプッシュする．
```
git push origin main
```
`username`と`password`の入力が求められる．


## C++
[レファレンス](https://cpprefjp.github.io/reference.html)

### 入出力
入出力には，以下をインクルードする．
```
#include <iostream>
```
入力は，例えば整数値のときは次のようにする．
```
int x;
std::cin >> x;
```
出力は，以下のようにする．
```
std::cout >> x;
```
改行をしたい時は以下のようにする．
```
cout << endl;
```
または
```
cout << "\n"
```
インクルードのときに，以下のように名前空間を設定すると良い．
```
#include <iostream>
using namespace std;
```
こうすることで，`cout::`と書かなくても良い．`calc_sum.cpp`では，`for`を使用して，配列を入力し，和を出力する関数を実装している．

### ファイル入出力
ファイル入出力には，ターミナル上で行うものとプログラム上で行うものがある．以下はターミナル上で行うものの例である．まず入力．
```
./a.out < input.txt
```
次に出力
```
./a.out > output.txt
```

プログラム上でファイルの入出力を行う場合には，`#include <fstream>`とする．まず、ファイルを開くためのストリームを作成．
```
ifstream in("input.txt");
```
次のようにエラー処理をしても良い．
```
if (!in) {
  cerr << "ファイルが見つかりません" << endl;
  return 1; // 異常終了
}
```
入力には`cin`ではなく`in`を使う．
```
int n;
  in >> n;
```
プログラム終了を明示的に書いても良い．
```
in.close();
```
出力の場合も似たような流れである．まず，書き込み用のファイルを作成する．
```
ofstream out("output.txt");
```
書き込みには，`cout`ではなく`out`を使う．
```
out << n << endl;
```
プログラム終了を明示的に書いても良い．
```
out.close();
```



## Python
[レファレンス](https://docs.python.org/ja/3/reference/index.html)

### 入出力
