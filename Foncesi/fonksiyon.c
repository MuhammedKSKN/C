#include <stdio.h>
void orthesabi(int vize, int final, int ortt)
{
    ortt = vize * 0.6 + final * 0.4;
    printf("%.2f", ortt);
}

int main()
{
    int vize, ogrencisayisi, adim, final;
    float ortt;
    printf("öğrencisayyisisi gir");
    scanf("%d", &ogrencisayisi);
   
    for (adim = 0; adim < ogrencisayisi; adim++)
    {
     if(ogrencisayisi==111)
    break;
        printf("lütfen vize ve final notu gir");
        scanf("%d",&  vize);
        scanf("%d",&final);
        long orthesabi=ortt;
        orthesabi=ortt;

            if(60<ortt<=80)
        {
            printf("harf notunuz AA \n");
        }
        else if (40 < ortt <= 60)
        {
            printf("harfnotunuz BA \n");
        }
        else if (30 < ortt <= 40)
        {
            printf("harfnotunuz BB \n");
        }
        else if (30 < ortt <= 20)
        {
            printf("harfnotunuz FF");
        }
    }
    return 0;
}
