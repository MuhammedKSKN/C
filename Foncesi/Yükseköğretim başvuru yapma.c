#include <stdio.h>
int main(){
double ydsnotu,alesnotu,mezunnotu,ortalama;
ydsnotu=70;
alesnotu=50;
mezunnotu=70;
ortalama = (ydsnotu + alesnotu + mezunnotu)/3;

if ( ydsnotu < 70) {
printf("Basvuru yapamazsiniz");
}
else if ( ortalama < 60) {
printf("Basvuru yapamazsiniz");
}
else if(ortalama >= 60) {
printf("Basvuru yapabilirsiniz");
}
return 0;

}






