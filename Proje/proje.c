#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct veriler
{
    char isim[10];
    int oyuncu_can;
    int oyuncu_altin;

};



int dogrucevap(int para)
{
    para+=10;

    return para;

}

int yanliscevap(int can)
{
    can=can-10;

    return can;
}







int main()
{
    struct veriler sonuc1; sonuc1.oyuncu_altin=0; sonuc1.oyuncu_can=100;
    FILE *sonuclar; 

    int sec1, sec1san=0, sec1kil=0, sec1asa=0, sec1sag=0, sec1sol=0;
    int sec2yarasa, sec2tuzak, sec2kurt, sec2yasli;
    int j = 0;
    int cev[10];
    // Alt satırdaki kod dizisi metin belgesindeki tüm kelimeleri bir diziye atar
    // Metin belgesini bulamadığında ise Dosya bulunamadı yazısını basar.
    // Metinden alma işlemi de matrislerden yaralanılarak yapıldı
    // Soruların sorulma aşamasında bu kısımdan faydalanılır
    FILE *dosya;
    dosya = fopen("sorular.txt", "r");
    char metin[2000][25];
    int i = 0;
    if (dosya != NULL)
    {
        while (!feof(dosya))
        {
            fscanf(dosya, "%s", &metin[i]);
            // printf("%s ",metin[i]);
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi,,");
    }
    
    printf("Bir Magarada Gozunu Actin Onunde 2 Yol var\n");

    printf("Hangi Yoldan Gideceksin?\n\nSag icin -->1 \nSol icin -->2\n");
    scanf("%d", &sec1);
    system("cls");
    

    switch (sec1)
    {
    case 1:
    {
        printf("Girdigin odada bir sandik var\ncok tehklikeli gozukmuyor\nne yapmak istersin?\n\n");
        printf("Sandigi acmak icin -->1\nAcmadan devam etmek icin -->2\nBeklemek icin -->3\n");
        scanf("%d", &sec1san);
        system("cls");
        switch (sec1san)
        {
        case 1:
        {
            printf("Actigin sandik icinden eski bir kilic cikti yanina almak ister misin?\n\nAlmak icin -->1\nBirakmak icin -->2\n");
            scanf("%d", &sec1kil);
            system("cls");
            printf("Odanin sonunda onune 2 yol daha cikti\n");
            break;
        }
        case 2:
        {
            printf("Sandiga bakmadan devam ettin onune tekrar iki yol cikti\n");
            break;
        }
        case 3:
        {
            printf("Gorunuse gore hicbir sey olmuyor\nBeklemekten biktin ve sandigi actin icinden bir kilic cikti\nKilici almak ister misin?\n\nKilici almak icin -->1\nKilici almamak icin -->2\n");
            scanf("%d", &sec1kil);
            system("cls");
            printf("Odanin sonunda onune 2 yol daha cikti\n");
            break;
        }
        }

        printf("Hangi yoldan gitmek istersin?\n\nSag icin -->1 \nSol icin -->2\n");
        scanf("%d", &sec1sag);
        system("cls");
        break;
    }

    case 2:
    {
        printf("Girdigin odada bir iskelet var\nInsan iskeletine benziyor acaba neden oldu?\nEtrafta zararli bir sey gozukmuyor acliktan olmali\nIskeletin yaninda bir asa var belkide buyuludur almak ister misin?\n\n");
        printf("Almak icin -->1\nAlmamak icin -->2\n");
        scanf("%d", &sec1asa);
        system("cls");
        switch (sec1asa)
        {
        case 1:
            printf("Simdilik asa normal bir sopadan farksiz belki ileride ise yarar\n");
            break;
        case 2:
            printf("Belki de asa sandigin sey sadece bir sopadir\nSanirim dogru secim yaptin\n");
            break;
        }
        printf("Odanin sonunda onune 2 kapi daha cikti hangisinden gitmek istersin?\n\nSag icin -->1 \nSol icin -->2\n");
        scanf("%d", &sec1sol);
        system("cls");
    }
    }

    if (sec1sag == 0 && sec1sol == 1)
    { // sol 1.yol
        printf("Giridigin odada yarasa surusu var!!\nUyuyor gibi gozukuyorlar ne yapmak istersin?\n\n");
        printf("Saldirmak icin -->1\nSessizce gecmeye calismak icin -->2\n");
        scanf("%d", &sec2yarasa);
        system("cls");

        if (sec1asa == 1)
        {
            switch (sec2yarasa)
            {
            case 1:
                printf("Iskeletten aldigin asa aklina geldi ve asayi ileriye dogru salladin\nHicbir sey olmadi yarasalar seni isirdiktan sonra uzaklasti\nDevam etmedikleri icin sanslisin\n\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 50;
                break;
            case 2:
                printf("Gizlice gecmeye calisirken yanina aldigin asa yere dustu butun yarasalar uyandi ve seni isirdiktan sonra gittiler\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 50;
                break;
            }
        }
        else
        {
            switch (sec2yarasa)
            {
            case 1:
                printf("Saldirmaya karar verirken aklina bir onceki odadaki asa geldi belki de ise yarayabilirdi diye aklindan gecirdin\nDusuncelerini temizledin ve yarasalara dogru kosarak kollarini sallamaya basladin\n");
                printf("Tabiki bu saldiri etkili olmadi yarasalar seni isirdiktan sonra oradan uzaklasti\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 50;
                break;

            case 2:
                printf("Sessizce ilerlerken aklina onceki odadaki asa geldi\nYanina almadigin icin saldirmaya calismamak mantikli olan karardi\nYanlarindan gecerken yarasalar uyanmadi\n\n");
            }
        }

        printf("Yarasalardan sonra karsina gidebilecegin yalnizce bir yol cikti\nYoldan devam ettin ve buyuk bir avluya geldin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
    }
    else if (sec1sag == 0 && sec1sol == 2)
    { // sol 2.yol
        printf("Odaya girer girmez uzerine bir ok geldi ve omzuna saplandi!!\nOdada baska tuzaklarin da olabilecegini aklindan gecirdin\n");

        if (sec1asa == 1)
        {
            printf("Onceki odadan aldigin asa belki de yardimci olabilir ne yapmak istersin\n\n");
            printf("Asa ile kendini iyilestirmeye calis -->1\nAsayi ileriye dogru firlatarak tuzak olup olmadigini kontrol et -->2\nBaska tuzak yoktur diyerek odanin sonuna yuru -->3\n");
            scanf("%d", &sec2tuzak);
            system("cls");
            switch (sec2tuzak)
            {
            case 1:
                printf("Asa ile kendini iyilestirmeye calistin ama hicbir sey olmadi\nSanirim yarali halde saatlerini sacma bir sopayi sallayarak gecirdin ve kan kaybindan oldun\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100;goto l;
                break;
            case 2:
                printf("Asayi ileriyo dogru attin ve bir tuzak aktif hale geldi uzerine dogru onlarca ok geliyor!!\nAsayi aldigina pisman olarak oldun\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100;goto l;
                break;
            case 3:
                printf("Yururken hicbir sey olmadi ya cok sansliydin ya da gercekten tuzak yoktu\nAklindaki sorunun cevabini bulmak icin sopayi geriye dogru firlattin ve bir tuzak calisarak onlarca ok firlatti\nSanirim tum sansini az once kullandin\n\n");
                printf("Oklardan sonra kosarak uzaklastin karsina gidebilecegin yalnizce bir yol cikti\nYoldan devam ettin ve buyuk bir avluya geldin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
                break;
            }
        }
        else
        {
            printf("Onceki odadan asayi almadigina pisman oldun belki de asa bu durumda sana yardimci olabilirdi\nKanaman var hizlica bir karar vermen gerekiyor ne yapicaksin?\n\n");
            printf("Oku cikarmak icin -->1\nBaska tuzak olup olmadigini dusunmeden kosmak icin -->2\nYavas ve temkinli sekilde ilerlemek icin -->3\n");
            scanf("%d", &sec2tuzak);
            system("cls");
            switch (sec2tuzak)
            {
            case 1:
                printf("Oku cikardin ama kanaman hizlandi panikleyerek kosarken baska bir tuzaga bastin ve onlarca ok tarafindan olduruldun\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100;goto l;
                break;
            case 2:
                printf("Yaralanmanin verdigi adrenalin ile cok hizli bir sekilde kostun\nBazi tuzaklar calisarak ok firlatsada hepsinden kacmayi basardin\n");sonuc1.oyuncu_can = sonuc1.oyuncu_can - 40;
                printf("Oklardan sonra kosarak uzaklasdin karsina gidebilecegin yalnizce bir yol cikti\nYoldan devam ettin ve buyuk bir avluya geldin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
                break;
            case 3:
                printf("Fazla yavas ilerledigin icin kan kaybindan oldun\nDaha hizli gitmeliydin\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100;goto l;
                break;
            }
        }
    }
    else if (sec1sag == 1 && sec1sol == 0)
    { // sag 1.yol
        printf("Girdigin odada uyuyan bir hayvan oldugunu farkettin!!\nKurt gibi gozukuyor odanin her tarafinda iskeletler var\n");

        if (sec1kil == 1)
        {
            printf("Onceki odada sandiktan aldigin kilic aklina geldi ve kilica bakarak bir karar verdin\n\n");
            printf("Saldirmak icin -->1\nSessizce yanindan Gecmek icin -->2\n");
            scanf("%d", &sec2kurt);
            system("cls");
            switch (sec2kurt)
            {
            case 1:
                printf("Kilicini cikardin ve uyanmadan once kurda sapladin\nCesaretinin odulunu hayatta kalarak almis oldun\n\n");
                break;
            case 2:
                printf("Yanindan sessizce gecmeye calisirken kurt kokunu aldi ve uyandi\nHemen kacmaya calistin ancak bacagindan isirdi sen de kilicin ile karsilik vererek kurdu oldurdun\n\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 60;
                printf("Yerdeki iskeletlerin kiyafetleri ile yarani sardiktan sonra yoluna devam ettin\n");
                break;
            }
            printf("\nKurdu gectikten sonra odanin sonuna dogru yurudun yalnizca bir yol vardi\nYoldan devam ettin ve buyuk bir avluya ulastin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
        }
        else
        {
            if (sec1san == 1)
            {
                printf("Sandigin icindeki kilici gordugun halde yanina almamanin verdigi pismanlik terlemene sebep oldu\nBu sayede kurt kokunu alarak uyandi ve sana saldirdi\nYanlis kararlarindan dolayi oldun\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100;goto l;
            }
            else
            {
                printf("Geride biraktigin sandigin icinde isine yarayanbilecek birseyler olabilecegi aklina geldi\nHemen kendini topladin ve bir karar verdin\n\n");
                printf("Kurdun seni farketmemesini umarak sessizce gecmeye calis -->1\nYerdeki iskeletlerin kemikleri ile kurda saldir -->2\nYerdeki kemiklerden birini uzaga atarak kurdun pesinden gitmesini bekle -->3\n");
                scanf("%d", &sec2kurt);
                system("cls");
                switch (sec2kurt)
                {
                case 1:
                    printf("Sessizce kurdun yanindan gecmeyi basardin uyanmadigi icin cok sanslisin\n");
                    printf("Kurdu gectikten sonra odanin sonuna dogru yurudun yalnizca bir yol vardi\nYoldan devam ettin ve buyuk bir avluya ulastin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
                    break;
                case 2:
                    printf("Kemikler ile kurda saldirdin beklenmedik saldirin karsisinda kosarak senden kacti\n");
                    printf("Kurdu gectikten sonra odanin sonuna dogru yurudun yalnizca bir yol vardi\nYoldan devam ettin ve buyuk bir avluya ulastin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
                    break;
                case 3:
                    printf("Kemigi atinca cikan sesten dolayi kurt uyandi tabiki kemige gitmek yerine sana saldirdi\nGerkcekten aptalca bir karar verdigini dusunerek oldun\n\n");
                    sonuc1.oyuncu_can = sonuc1.oyuncu_can - 100; goto l;
                    break;
                }
            }
        }
    }
    else if (sec1sag == 2 && sec1sol == 0)
    { // sag 2.yol
        printf("Girdigin odada karsina yasli bir adam cikti kosarak yanina geldi ve buyucu oldugunu soyledi\nAsasini gorup gormedigini soruyor belki de kafayi yemistir ne yapmak istersin?\n\n");
        printf("Asayi gormedigini soyle -->1\nOna ayiracak zamanin olmadigini soyleyerek uzaklas -->2\nIlk hamleyi yaparak adama saldir -->3\n");
        scanf("%d", &sec2yasli);
        system("cls");

        if (sec1kil == 1)
        {
            switch (sec2yasli)
            {
            case 1:
                printf("Asayi gormedigini soyledikten sonra yasli adam kilicini gordu ve ikisini birlikte tasiyamayacagini dusunerek gitmene izin verdi\n\n");
                break;
            case 2:
                printf("Soylediklerine sinirlenen adam sen uzaklasirken arkandan saldimaya calisti\nTam kafana tas ile vuracakken kilicini gorup kacti\n\n");
                break;
            case 3:
                printf("Adama kilicin ile saldirdin ve oldurdun\nBelkide sucsuz bir adamdi cok canice bir karar verdin\n\n");
                break;
            }
            printf("Odanin sonuna geldiginde onunde sadece bir yol vardi\nYoldan devam ettin ve buyuk bir avluya ulastin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
        }
        else
        {
            switch (sec2yasli)
            {
            case 1:
                printf("Yasli adam asanin sende olmadigina inanmadi ve uzerine atladi!!\nKisa bir bogusmadan sonra kafana tas ile vurup kacti\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 30;
                printf("Kendine geldikten sonra yoluna devam ettin\n\n");
                break;
            case 2:
                printf("Soylediklerine sinirlenen adam sen uzaklasirken kafana tas ile vurup kacti\n");
                sonuc1.oyuncu_can = sonuc1.oyuncu_can - 30;
                printf("Kendine geldikten sonra yoluna devam ettin\n\n");
                break;
            case 3:
                printf("Hizli bir hamle yaparak yasli adami tas ile bayilttin\nSavunmasiz yasli bir adama saldirmanin verdigi pismalik ile yoluna devam ettin\n\n");
                break;
            }
            printf("Odanin sonuna geldiginde onunde sadece bir yol vardi\nYoldan devam ettin ve buyuk bir avluya ulastin\nAvlunun ortasinda bir kagit duruyor kosarak kagidi okumaya gittin\n");
        }
    }

    // Mağara kısmı sonu avluya çıktı
    if (sonuc1.oyuncu_can == 0)
    {
        printf("\n\nOldugunuz Icin Oyun Bitti");
        return 0;
    }

    printf("Kagittaki anlamsiz sozleri okudugun anda bir buyucu ortaya cikti ve sana sunlari soyledi\n\n");
    if (sonuc1.oyuncu_can == 100)
    {
        printf("Gecmis oldugun yollardan hic hasar almadigin icin tebrikler\n\n");
    }
    else
    {
        printf("Gecmis oldugun yollardan bir miktar hasar almissin suan canin %d\n", sonuc1.oyuncu_can);
    }

    printf("Simdi sana soracagim sorulara verdigin her yanlis cevap icin 10 can kaybediceksin\nHer dogru cevap icin de 10 altin kazanacaksin\n\n");
    printf("(Devam Etmek Icin Bir Tusa Basiniz)");
    getch();
    system("cls");
    // Soru1
    for (; j < 8; j++)
    {
        if (j == 4)
            {printf("\n");}

        printf("%s ", metin[j]);
    }
   
    scanf("%d", &cev[0]);
      if(cev[0]==2)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");
   
   
   
   if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
   
   
   
    // Soru2
    for (; j < 17; j++)
    {
        if (j == 13)
            {printf("\n");}

        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[1]);
     if(cev[1]==1)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");
    


    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
    
    

    // Soru3
    for (; j < 33; j++)
    {
        if (j == 25)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[2]);
     if(cev[2]==3)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");
   


   if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
   
   
   
    // Soru4
    for (; j < 47; j++)
    {
        if (j == 43)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[3]);
    
     if(cev[3]==3)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");
    


    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
    


    // Soru5
    for (; j < 62; j++)
    {
        if (j == 55)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[4]);
     if(cev[4]==2)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");
   


   if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
   


    // Soru6
    for (; j < 77; j++)
    {
        if (j == 71)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[5]);
     if(cev[5]==3)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");



    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
    
    
    
    // Soru7
    for (; j < 87; j++)
    {
        if (j == 83)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[6]);
     if(cev[6]==1)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");



    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
   
   

    // Soru8
    for (; j < 99; j++)
    {
        if (j == 94)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[7]);
     if(cev[7]==4)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");



    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}


  
    // Soru9
    for (; j < 114; j++)
    {
        if (j == 108)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[8]);
     if(cev[8]==2)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");



    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}
   
   

    // Soru10
    for (; j <128; j++)
    {
        if (j == 124)
           { printf("\n");}
        printf("%s ", metin[j]);
    }
    
    scanf("%d", &cev[9]);
     if(cev[9]==1)
            {   
            sonuc1.oyuncu_altin=dogrucevap(sonuc1.oyuncu_altin);
            }
            else
            {
            sonuc1.oyuncu_can=yanliscevap(sonuc1.oyuncu_can);
            }
    system("cls");


    if(sonuc1.oyuncu_can<=0)
{
    printf("Caniniz Bittigi Icin Oldunuz!!\n\n");
    goto l;
}



    printf("Tebrikler Oyunu Bitirdiniz\n");
  l:printf("Oyun Verileriniz Su Sekilde\n");
    printf("%d Can\t%d Altin\n",sonuc1.oyuncu_can,sonuc1.oyuncu_altin);
    printf("Devam Etmek Icin Herhangi Bir Tusa Basin ve Isminizi Girerek Skorunuzu Kayit Edin");
    getch();
    system("cls");

    sonuclar=fopen("Sonuclar.txt","a"); 

    printf("Lutfen Isminizi Giriniz: ");    
    scanf("%s",&sonuc1.isim);

    fprintf(sonuclar,"%s\t%d Can\t%d Altin\n",sonuc1.isim,sonuc1.oyuncu_can,sonuc1.oyuncu_altin);     

    system("cls");

    fclose(sonuclar);  
    
    printf("Verileriniz Su Sekilde Kayit Edilmistir---> %s\t%d Can\t%d Altin",sonuc1.isim,sonuc1.oyuncu_can,sonuc1.oyuncu_altin);

    getch();

    system("cls");

  

    



            
    return 0;
}



