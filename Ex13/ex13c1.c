/*キーボードから数値を入力するたびに、
最初の入力からそれまでの入力の平均
値を逐次計算して表示するプログラムを
作成しなさい。
プログラムは0が入力されたら終了する
ものとする。
また、逐次平均の計算には「avg」という
名前の関数を作成して使用すること。
avg関数は「入力回数n」
「n-1回目までの平均値」
「n回目の入力データ」の三つを引数に
取り、「n回目までの平均値」を返す関数
とする。
*/

#include <stdio.h>

double avg(double,int);

int main(void){
	double n,sum=0;
	int i=1;
	
	printf("逐次平均の出力を行います。\n");
	while(1){
		printf("数値を入力してください。(%d回目)",i);//入力
		scanf("%lf",&n);
		if(n == 0){//入力値が0ならループを抜ける
			printf("プログラムを終了します。\n");
			break;
		}
		sum += n;//それまでの合計
		avg(sum,i);//関数avgに入力値を引数として持っていき、計算・表示まで行って返す
		i++;//入力回数の更新を行う
	}
	return 0;
}

double avg(double sum, int i){
	double  ans;
	ans = sum/(double)i;
	printf("%d回目までの合計は%gで平均値は%gです\n",i,sum,ans);
	return ans;
}