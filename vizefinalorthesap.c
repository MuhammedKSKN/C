#include <stdio.h>
int orthesabi(int matris[5]){
    int topnot=0;
    float ort;
    int k;
    for(k=0;k<5;k++){
        topnot+=matris[k];
    }
    ort=(topnot/5);
    return ort;

}
int main()
{
    int vize[5];
    float vizeort;
    int final[5];
    float finalort;
    int i;
    int k;
    int h;
    for (i = 0; i < 5; i++)
    {
        printf("%d. ogrencinin vize notunu giriniz\n",i+1);
        scanf("%d",&vize[i]);
        printf("%d. ogrencinin final notunu giriniz\n",i+1);
        scanf("%d",&final[i]);
    }

      vizeort=orthesabi(vize);
      finalort=orthesabi(final);
      printf("\nvize ortalamasi=%0.2f",vizeort);
      printf("\nfinal ortalamasi=%0.2f",finalort);
      for(h=0;h<5;h++){
        printf("%d",vize[h]);
      }
    return 0;
}
