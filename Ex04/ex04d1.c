/*
六十干支（ろくじっかんし）とは、
　 十干（じっかん：こう、おつ、へい、てい、ぼ、き、こう、しん、じん、き）と十二支（じゅうにし：ね、うし、とら、う、たつ、み、うま、ひつじ、さる、とり、いぬ、い）を組み合わせて、長い年数や日数を表すため、数字のかわりに、日本や中国で使われてきたものです。
十干十二支（じっかんじゅうにし）とも呼ばれます。いわゆる干支（えと、かんし）です。
漢字で書くと、
　（甲、乙、丙、丁、戊、己、庚、辛、壬、癸）
　（子、丑、寅、卯、辰、巳、午、未、申、酉、戌、亥）
となります。
西暦2015年の干支は乙未（いつび・「きのとのひつじ」とも呼ぶ）にあたります。
このことと、干支の周期性に基づいて、西暦で表された年がどの六十干支にあたるかを求めるプログラムを作成しなさい。
作成したプログラムを実行し、以下の西暦や自分の誕生年がそれぞれどの六十干支なのかを確認してみること。
・672年（日本古代最大の内乱が起きた年）
・1384年（この年、州安和尚によって発見された福島県の温泉の名称がちなむ)
・1868年（旧幕府勢力と明治新政府の間で起こった内戦が始まった年）
※（　）内に記した出来事や関連施設には干支にちなんだ名前がつけられているのがわかるでしょう。
3つの年の干支をそれぞれ漢字で書いて音読みしてみてください。
[実行例] ###中国で「あの」革命が起こった年で試してみましょう.###
 % ./a.out
西暦４桁を入力してください（例:2020）>1911
十干は「辛」
十二支は「亥」
*/

#include <stdio.h>

int main(){
  int y,jikan,junishi;

  printf("西暦4桁を入力してください（例：2020）＞ ");
  scanf("%d",&y);
  printf("\n");

  jikan = y%10;
  junishi = y%12;

  printf("十干は");
  switch(jikan){
  case 0:
    printf("「庚」");
    break;
  case 1:
    printf("「辛」");
    break;
  case 2:
    printf("「壬」");
    break;
  case 3:
    printf("「癸」");
    break;
  case 4:
    printf("「甲」");
    break;
  case 5:
    printf("「乙」");
    break;
  case 6:
    printf("「丙」");
    break;
  case 7:
    printf("「丁」");
    break;
  case 8:
    printf("「戊」");
    break;
  case 9:
    printf("「己」");
    break;
  }
  printf("\n");
  printf("十二支は");

  switch(junishi){
  case 0:
    printf("「申」");
    break;
  case 1:
    printf("「酉」");
    break;
  case 2:
    printf("「戌」");
    break;
  case 3:
    printf("「亥」");
    break;
  case 4:
    printf("「子」");
    break;
  case 5:
    printf("「丑」");
    break;
  case 6:
    printf("「寅」");
    break;
  case 7:
    printf("「卯」");
    break;
  case 8:
    printf("「辰」");
    break;
  case 9:
    printf("「巳」");
    break;
  case 10:
    printf("「午」");
    break;
  case 11:
    printf("「未」");
    break;
  }
  printf("\n");
  
  return 0;
}



