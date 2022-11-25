#include <stdio.h>
int main() {
int sayi=12421;

int birler,onlar,yuzler,binler,onbinler;
birler=sayi%10;
printf("birler:%d \n ",birler);
onlar=(sayi%100-birler)/10;
printf("onlar:%d \n ",onlar);
yuzler=(sayi%1000-(birler+onlar))/100;
printf("yuzler:%d \n ",yuzler );
onbinler=(int) sayi/10000;
printf("onbinler :%d \n ",onbinler);


if(birler==onbinler && onlar==binler)
{
   printf("palinfromdur");
}
else 
{
printf("değildir")
  return 0 ;  
}

