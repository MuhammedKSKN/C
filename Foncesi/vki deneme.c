#include <stdio.h>
int main(){
double  boy=1.50;

double kilo=30;

double vki;

vki=kilo/(boy*boy);

printf("vki: %f  ",vki);

if(vki <= 18)
   printf("Hesaplanan vücut kitle indeksinize göre bulunduğunuz kategori: Zayıf");

else if(vki>18 && vki>25)
   printf("Hesaplanan vücut kitle indeksinize göre bulunduğunuz kategori: Normal");

else if(vki>=25 && vki>30)
   printf("Hesaplanan vücut kitle indeksinize göre bulunduğunuz kategori: Kilolu");

else if(vki>=30 && vki>40)
   printf("Hesaplanan vücut kitle indeksinize göre bulunduğunuz kategori: Obez");

else
   printf("Hesaplanan vücut kitle indeksinize göre bulunduğunuz kategori: Aşırı Obez");
   
return 0;




}