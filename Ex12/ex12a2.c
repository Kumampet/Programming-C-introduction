/*scanfの戻り値が入力値を読み込んだ引数の個数になることを確認する。
以下のプログラムを実行してそれぞれの行の入力についてscanfの戻り値を調べ、その結果をex12a2.txtに記入しなさい。
*/
#include <stdio.h>

int main() {
  int a, b, value;

  printf("Input a, b > ");
  value = scanf("%d%d", &a, &b);
  printf("scanf value = %d (a:%d, b:%d)\n", value, a, b);

  return 0;
}

/*入力値は以下を使用すること（<Ctrl+d>はCtrlキーを押しながらdキーを押す）。
3    5
2    4.6
3.2  6.7
5.2  8
3    a
a    5
<Ctrl+d>
補足説明
例えば、scanf("%d%d",&i, &j) の戻り値は、
0（全く読み込めなかった）
1（1個だけ読み込めた）
2（2個読み込めた）
のどれかになります。
ただし、整数型の入力に対して浮動小数点の値が入力されると、整数部分だけは読み込みに成功して読み込んだ個数にカウントされます。 また、<Ctrl+d>だけが入力された場合の戻り値は EOF（-1）になります。ハンドアウトlec12-22ページを参照してください。*/
