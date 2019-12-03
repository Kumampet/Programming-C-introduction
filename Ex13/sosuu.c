/*
素数かどうかを判定する関数「isprime」を作成し、
2から1000までの素数を10列の表として表示するプ
ログラムを作成しなさい。
isprime関数は判定する数字を引数に取り、素数の
場合は"1"を、そうでない場合は"0"を返す関数とする。
なお、実行例のように列を揃えて（10個単位で改行さ
せて）表示させること（ブラウザによってはずれて見
える可能性がある）。 
*/

#include <stdio.h>
#define MAX 100000

int isprime(int);

int main(void){
	int n,i=1,k=2;
	
	while(k <= MAX){
		n = isprime(k);//関数への引数代入
	
		if(n == 1){ //hantei1 =素数　であるときの処理
			printf("%3d\t",k);//Tabと3桁目で整える
			if(i%10 == 0){ //i(素数の個数＝その行の列数)が10で割り切れるようになったら改行
				printf("\n");
			}
			i++; //素数の個数の更新
		}//素数である場合の処理終了位置
		//素数でない場合は調べる整数値の更新のみをしてスルー
		k++;//調べる整数値の更新
	}
	printf("\n");
	
	return 0;
}

int isprime(int n){
	int i,hantei;
	
	if(n == 2){//整数値が2の場合のみの特別処理
		hantei = 1;
	}else{
		for(i=2; i<n; i++){
			if(n%i == 0){
				hantei = 0;
				break; //約数が見つかった時点でhanteiを０にしてbreakさせて値を返す
			}else hantei = 1;//約数が無ければhanteiが１のままになる
		}
	}
	return hantei;
}
