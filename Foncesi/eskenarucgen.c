#include <stdio.h>
int main()
{
    int adim, yildizsayisi, girdisayi, bosluk;
    printf("Lutfen  tamsayi giriniz");
    scanf("%d", &girdisayi);
    for (adim = 1; adim <= girdisayi; adim++)
    {
        for (bosluk = 1; bosluk <= girdisayi-adim ; bosluk++)
        {

            printf(" ");
        }
        for (yildizsayisi = 1; yildizsayisi <= 2 * adim - 1; yildizsayisi == yildizsayisi++)
        {
          
            printf("*");
        }

        printf("\n");
    }
    return 0;
}