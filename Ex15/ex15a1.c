#include <stdio.h>
#define MAX 50

int yase=0,normal=0,_1=0,_2=0,_3=0,_4=0;

void bmi_hantei(double,int);

int main(){
  double weight[MAX],hight[MAX],BMI[MAX];
  int i,ninzu=0;

  printf("身長(cm)と体重(kg)を空白で区切って人数文入力してください\n");
  for(i=0; i<MAX; i++){
      if((scanf("%lf%lf",&hight[i],&weight[i]))!=EOF){
	hight[i] = hight[i]/100;//身長をメートルに換算
	BMI[i] = weight[i] / (hight[i]*hight[i]);//BMIの計算
      }else break;
      ninzu++;
  } 
  printf("\n人数\tBMI\t状態\n");
  for(i=0; i<ninzu; i++){
    bmi_hantei(BMI[i],i+1);
  }

  yase=(double)yase/ninzu*100+0.5;
  normal=(double)normal/ninzu*100+0.5;
  _1=(double)_1/ninzu*100+0.5;
  _2=(double)_2/ninzu*100+0.5;
  _3=(double)_3/ninzu*100+0.5;
  _4=(double)_4/ninzu*100+0.5;

  printf("やせている %2d%%\n", yase);
  printf("正常 %2d%%\n", normal);
  printf("肥満(1度) %2d%%\n", _1);
  printf("肥満(2度) %2d%%\n", _2);
  printf("肥満(3度) %2d%%\n", _3);
  printf("肥満(4度) %2d%%\n", _4);


  return 0;
}

/*-----戻り値は設定なしのvoid型で組んだ-----*/
void bmi_hantei(double bmi, int ninzu){
  
  if(bmi < 18.5){//やせ形
    printf("%d人目\t%4.1f\tやせ形\t\n",ninzu,bmi);
    yase++;
  }else   if(18.5 <= bmi && bmi < 25){//標準
    printf("%d人目\t%4.1f\t標準\t\n",ninzu,bmi);
    normal++;
  }else   if(25 <= bmi && bmi <30){//肥満１度
    printf("%d人目\t%4.1f\t肥満（１度）\t\n",ninzu,bmi);
    _1++;
  }else   if(30 <= bmi && bmi < 35){//肥満２度
    printf("%d人目\t%4.1f\t肥満（２度）\t\n",ninzu,bmi);
    _2++;
  }else   if(35 <= bmi && bmi < 40){//肥満３度
    printf("%d人目\t%4.1f\t肥満（３度）\t\n",ninzu,bmi);
    _3++;
  }else{
    printf("%d人目\t%4.1f\t肥満（４度）\t\n",ninzu,bmi);
    _4++;
  } 
}
