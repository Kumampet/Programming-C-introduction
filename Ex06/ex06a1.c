/*下のプログラムは、キーボードから読み込んだ整数以下で、3 の倍数となるすべての正の整数の和を計算するものです。
for文中の （初期化；条件式；カウンター変数の更新）、if文中の条件判断をそれぞれ適切な式に修正し、プログラムを完成させなさい。
*/
 #include <stdio.h>
 
int main()
{
  int n, sum = 0;
  int i;
 
  printf("整数を入力して下さい：");
  scanf("%d", &n);
  
  for(i = 0; i <= n; i++){
    if(i%3 == 0){
      sum += i ;
    }
  }
  printf("%d以下で３の倍数となる正の整数の和は%dです\n", n, sum);

  return 0;
}