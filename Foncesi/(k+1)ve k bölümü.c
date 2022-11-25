#include <stdio.h>
int main(){
int n;
int k=1;
float sonuc=0;
printf("Lütfen n tamsayı değerini giriniz \n");
scanf("%d", & n);


while(k<=n){
sonuc=sonuc+((k+1)/k);
k=k+1;


}
printf("sonuc=%0.1f",sonuc);
// %0.1f yazmamak yerine k+1.0 yazılabilir

return 0;


}
