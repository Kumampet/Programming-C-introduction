/*whileを利用した無限ループとbreak文の組合せを使い、以下のプログラムを作成しなさい。
浮動小数点型の実数を繰り返し読み込み、その総和を計算し、それを表示する。
総和の10の位が３の倍数の場合に「条件成立！」と表示しプログラムを終了する。
ヒント：浮動小数点数の特定桁のみを計算するには、「除算」と「整数への型変換(キャスト)」を組み合わせます。
注意点：無限ループのプログラムを途中で強制的に終了するには、「Ctrl+c」とキーボード操作すること。
[実行例]
% ./a.out
数字を入力してください　：　100.3
合計 100.300000
数字を入力してください　：　20.0
合計 120.300000
数字を入力してください　：　40.1
合計 160.400000
条件成立！
% ./a.out
数字を入力してください　：　1.1
合計 1.100000
数字を入力してください　：　53.0
合計 54.100000
数字を入力してください　：　40.5
合計 94.600000
条件成立！*/

#include <stdio.h>

int main(){
  double n,n2,sum,sum2;
  int t,s;
  n = 0;
  n2 = 0;
  sum = 0;
  sum2 = 0;

  while(1){
      printf("数字を入力してください　：　");
      scanf("%lf",&n);//値の読み取り

      sum = n + n2;//合計
      n2 = sum;

      if(sum < 100.0)
	sum2 = sum * 10;
      sum2 = sum;
      t = (int)sum2 / 10;//合計の１０の位を抽出
      s = t%10;
      if (s%3 != 0)//１０の位が３で割ってあまりが発生したとき
	printf("合計：%f\n",sum);
      else if(s == 0)//１０の位が０のとき
	printf("合計：%f\n",sum);
      else{//割ってあまりが発生しなかったとき（あまり０）
	printf("合計：%f\n",sum);
	printf("条件成立！\n");
	break;
      }
  }
  return 0;
}
