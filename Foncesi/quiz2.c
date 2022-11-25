#include <stdio.h>
int main()
{
    int benzinlt, aracsayi, tekrar;
    char kod;
    printf("gelen araç sayisi kactir");
    scanf("%d", aracsayi);
    while (tekrar <= aracsayi)
    {
        tekrar++ printf("lutfen arac kodunu giriniz \n");
        printf("RENAULT İÇİN 1 \n Mazda için 2 \n Honda için 3 \n Ford için4");
        scanf("%c", kod);
        printf("lutfen aracın nekadar benzin aldigini yaziniz");
        scanf("%d", benzinlt);
    }
    return 0;
}