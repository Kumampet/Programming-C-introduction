/*8個の整数をキーボードから配列に入力し、その中の最大値と最小値を表示するプログラムを作成しなさい。 なお、入力された整数も最後に表示すること。
キーボードから入力された配列サイズが、10個を超えた場合のエラー処理は考えなくてよい。

実行例
 
% ./a.out
8個の整数を空白で区切って入力してください。
3 10 -5 4 20 9 -12 -8 
最大値は20です。
最小値は-12です。
入力された整数の表示
3 10 -5 4 20 9 -12 -8
% 

ヒント：配列a[8]から最大値を探す方法
ステップ1. 最大値を保持する変数（例えばmax）に最初の要素a[0]を代入
ステップ2. for(), while()などで，a[i] (i = 1,...,7)に対し，以下の処理を行う
もしa[i]がmaxより大きければ，maxにa[i]を代入
ステップ3. 上記処理の結果，maxには a[i] (i = 0,...,7)の中の最大値が残る
※ 最小値を探す方法も基本的に同じです.
*/

#include <stdio.h>

int main(){

  int a,i[8],n,max=0,min=0;

  printf("８個の整数を空白で区切って入力してください。\n");//整数値の入力
  for(a = 0 ; a < 8 ; a++){
    scanf("%d",&n);
    i[a] = n;//カウンタ変数による入力値の配列への代入
  }
  
  for(a = 0 ; a < 8 ; a++){//最大値の参照
    if(max <= i[a]){
      max = i[a];
    }
  }
  for(a = 0 ; a < 8 ; a++){//最小値の参照
    if(max >= i[a]){
      min = i[a];
    }
  }

  printf("\n最大値は%dです。\n",max);
  printf("最小値は%dです。\n",min);
  for(a = 0 ; a < 8 ; a++){
    printf("[%d]\n",i[a]);
  }
  return 0;
}
