#include <stdio.h>
int main(){
int adim,yildizsayisi,girdisayi;
printf("Lutfen  tamsayi giriniz");
scanf("%d", & girdisayi);

for(adim=1;adim<=girdisayi;adim++){
printf(" \t " );

for(yildizsayisi=1;yildizsayisi<=adim;yildizsayisi++){

printf(" * ");

}

printf("\n");

}
return 0;




} 