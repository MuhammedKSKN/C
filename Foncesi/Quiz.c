#include <stdio.h>
int main()
{
    int km, gun,ucret;
    char tur;
    printf("Lütfen aracınızın türünü giriniz \n ");
    printf("Aracinizin turu arazi ise a veya A \n ");
    printf("Aracinizin turu binek ise b veya B \n ");
    printf("Aracinizin turu spor ise s veya S \n ");
    printf("Araciniz station ise S veya s \n ");
    scanf("%c", &tur);
    printf("Lutfen aracinizi kaç km surdugunuzu yaziniz");
    scanf("%d", &km);
    printf("Lütfen aracınızı kaç gün kullandiginizi yaziniz");
    scanf("%d", &gun);

    switch (tur)
    {
    case 'a':
    case 'A':
        ucret = (gun * 20) + (km * 18);
        printf("ödeyeceginiz ucret :%d", ucret);

        break;
    case 'B':
    case 'b':
        ucret = (gun * 32) + (km * 22);
        printf("ödeyeceginiz ucret :%d", ucret);
        break;
    case 's':
    case 'S':
        ucret = (gun * 43) + (km * 28);
        printf("ödeyeceginiz ucret :%d", ucret);
        break;
    case 'p':
    case 'P':
        ucret = (gun * 51) + (km * 36);
        printf("ödeyeceginiz ucret :%d", ucret);
        break;

    default:
        printf("Lütfen geçerli bir araba kodu giriniz");

        break;
    }

    return 0;
}