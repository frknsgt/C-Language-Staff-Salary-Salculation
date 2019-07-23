#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("\n************************PERSONEL MAAS HESAPLAMA YAZILIMI************************\n");
    char medeni,calisma,engel,sorgu,brut_ad[100],ad[100],net_ad[100],q=1,w=1,e=1,r=1,t=1;
    int v=1,i=1,b=0,sayac=0,bcocuk,kcocuk,engel_oran,engel_indirim=0,es_yardimi=0,engel_derece=0,top_cocuk=0;
    int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0,s12=0,s15=0,s20=0,s27=0,s35=0,sayi=0;
    float aylik_brut=0,toplam_brut,aylik_net,g_vergisi,toplam_net=0,toplam_vergi=0,toplam_brut_tum=0,stoplam=0,yuksek_brut=0;
    float yuksek_brut_g=0,engel_sayi=0,yuksek_brut_anet=0,yuksek_net=0,yuksek_net_brut,yuksek_net_g,evli=0,bekar=0,calisan=0,toplam_cocuk=0;
    long long tc,brut_tc,net_tc;
    while(i>0){ r=1;
    printf("TC no Giriniz:");
    scanf("%lld",&tc);
    printf("Adinizi ve Soyadinizi Giriniz:");
    getchar(); gets(ad);
    while(1)
    {printf("Brut ucretinizi giriniz:");
    scanf("%f",&aylik_brut);
    if (aylik_brut>=1777.50)
    break;}
    toplam_brut=aylik_brut;
    toplam_brut_tum=toplam_brut_tum+toplam_brut;
    //*****************************ES BILGILERI***********************
    while(w!=0)
    {printf("Medeni Durmunuzu Seciniz(e-E/b-B):");
    scanf("%s",&medeni);
    switch(medeni)
    {case 'e':
     case 'E': evli++; w=0;
        while(q!=0)
        {printf("Esiniz calisiyormu(e-E/h-H):");
        scanf("%s",&calisma);
        switch(calisma)
        {case 'e':
         case 'E':
            es_yardimi=0; q=0; calisan++; break;
        case 'h':
        case 'H':
            toplam_brut=toplam_brut+220; es_yardimi=220; q=0; break;
        default:
            printf("Yanlis deger girdiniz!\n");
        }}break;
        case 'b':
        case 'B':
            es_yardimi=0; bekar++; w=0; break;
        default:
            printf("Yanlis deger girdiniz!\n");}}
        //***********************ÇOCUK BILGILERI***********************
        while (1){
        printf("6 yasindan buyuk cocuk sayisini giriniz:");
        scanf("%d",&bcocuk);
        if(bcocuk>-1)break;}
        while (1){
        printf("6 yasindan kucuk cocuk sayisini giriniz:");
        scanf("%d",&kcocuk);
        if (kcocuk>-1)break;}
        top_cocuk=bcocuk+kcocuk;       toplam_cocuk+=top_cocuk;
        if (top_cocuk>3) sayi++;
        toplam_brut=toplam_brut+bcocuk*45+kcocuk*25;
        //***********************ENGELLILIK DURUMU*********************
        while(e!=0)
        {printf("Engellilik durumunuzu secin(e-E/h-H):");
        scanf("%s",&engel);
        switch (engel)
        {case 'e':
         case 'E': e=0; engel_sayi++;
         while (1){
            printf("Engel oranini giriniz(1-100):");
            scanf("%d",&engel_oran);
            if (engel_oran<0 || engel_oran>100)
            printf("\nYanlis oran girdiniz Tekrar giriniz!\n");
            else break;}
            if ((engel_oran>=40) && (engel_oran<60))
                {engel_indirim=toplam_brut-210; engel_derece=3; break;}
            else if ((engel_oran>=60) && (engel_oran<80))
                {engel_indirim=toplam_brut-470; engel_derece=2; break;}
            else if ((engel_oran>=80) && (engel_oran<=100))
                {engel_indirim=toplam_brut-900; engel_derece=1; break;}
            else if(engel_oran>=0 && engel_oran<40)
                {engel_derece=0; engel_indirim=toplam_brut; break;}
        case 'h':
        case 'H':
            e=0; engel_derece=0; engel_indirim=toplam_brut; break;
        default:
            printf("Yanlis deger girdiniz!\n");
        }}//************************TOPLAM NET UCRET**********************
            if (toplam_brut<2000)
                { s15=s15+1;
                aylik_net=toplam_brut-engel_indirim*15/100; b++;}
            else if((toplam_brut>=5000) && (toplam_brut<10000))
                { s27=s27+1;
                aylik_net=toplam_brut-engel_indirim*27/100;}
            else if(toplam_brut>=10000)
                { s35=s35+1;
                aylik_net=toplam_brut-engel_indirim*35/100;}
            else if ((toplam_brut>=2000) && (toplam_brut<5000))
                { s20=s20+1;
                aylik_net=toplam_brut-engel_indirim*20/100;}
    //************************İSTATİSTİKSEL BİLGİ HESAPLAMASI**********************
    toplam_net=aylik_net+toplam_net;
    g_vergisi=toplam_brut-aylik_net;
    toplam_vergi=toplam_vergi+g_vergisi;
    if(yuksek_brut<toplam_brut)
    {   strcpy(brut_ad,ad);
        brut_tc=tc;
        yuksek_brut_g=g_vergisi;
        yuksek_brut_anet=aylik_net;
        yuksek_brut=toplam_brut;}
    if(yuksek_net<aylik_net)
    {yuksek_net=aylik_net;
     net_tc=tc;
     strcpy(net_ad,ad);
     yuksek_net_brut=toplam_brut;
     yuksek_net_g=g_vergisi;}
    //*************************YAZDIRMA SAYFASI****************************
    printf("\n\n*********************************MAAS DETAYLARI*********************************");
    printf("\nTC no:%lld",tc);
    printf("\nAd soyad:");  printf(ad);
    printf("\nAylik brut ucret:%.2f ",aylik_brut);
    printf("\nEs icin aile yardimi odenegi: %d TL",es_yardimi);
    printf("\nCocuk icin aile yardimi odenegi: %d TL",bcocuk*45+kcocuk*25);
    printf("\nAylik toplam brut ucret: %.2f TL",toplam_brut);
    printf("\nGelir Vergisi Kesintisi: %.2f TL",g_vergisi);
    if (engel_derece!=0)
    {printf("\nEngel derecesi: %d. dereceden",engel_derece);}
    printf("\nAylik Net Ucret: %.2f TL",aylik_net);
    //************************GEREKLI OLAN PARA TÜRLERİ**************************
    printf("\n\n***************************GEREKLI OLAN PARA TURLERI****************************");
    int ikiyuz,yuz,elli,yirmi,on,bes,bir,ellik,yirmibesk,onk,besk,birk;
    float kalan_para=0;
    ikiyuz=aylik_net/200;
    yuz=(aylik_net-ikiyuz*200)/100;
    elli=(aylik_net-ikiyuz*200-yuz*100)/50;
    yirmi=(aylik_net-ikiyuz*200-yuz*100-elli*50)/20;
    on=(aylik_net-ikiyuz*200-yuz*100-elli*50-yirmi*20)/10;
    bes=(aylik_net-ikiyuz*200-yuz*100-elli*50-yirmi*20-on*10)/5;
    bir=(aylik_net-ikiyuz*200-yuz*100-elli*50-yirmi*20-on*10-bes*5)/1;
    kalan_para=(aylik_net-ikiyuz*200-yuz*100-elli*50-yirmi*20-on*10-bes*5-bir*1);
    ellik=kalan_para/0.50;
    yirmibesk=(kalan_para-ellik*0.5)/0.25;
    onk=(kalan_para-ellik*0.5-yirmibesk*0.25)/0.10;
    besk=(kalan_para-ellik*0.5-yirmibesk*0.25-onk*0.10)/0.05;
    birk=(kalan_para-ellik*0.5-yirmibesk*0.25-onk*0.10-besk*0.05)/0.01;
    s1=s1+ikiyuz; s2=s2+yuz; s3=s3+elli; s4=s4+yirmi; s5=s5+on; s6=s6+bes; s7=s7+bir;//istatiksel kısım için
    s8=s8+ellik; s9=s9+yirmibesk; s10=s10+onk; s11=s11+besk; s12=s12+birk;
    printf("\n   200'luk banknotlardan: %d adet",ikiyuz);
    printf("\t1'TL madeni para: %d adet",bir);
    printf("\n   100'luk banknotlardan: %d adet",yuz);
    printf("\t50'kurusluk madeni para: %d adet",ellik);
    printf("\n   50'lik banknotlardan: %d adet",elli);
    printf("\t        25'kurusluk madeni para: %d adet",yirmibesk);
    printf("\n   20'lik banknotlardan: %d adet",yirmi);
    printf("\t        10'kurusluk madeni para: %d adet",onk);
    printf("\n   10'luk banknotlardan: %d adet",on);
    printf("\t        5'kurusluk madeni para: %d adet",besk);
    printf("\n   5'lik banknotlardan: %d adet",bes);
    printf("\t        1'kurusluk madeni para: %d adet",birk);
    printf("\n\n********************************************************************************");
    while(r!=0)
    {printf("\nBaska Calisan varmi?(e-E/h-H):");
    scanf("%s",&sorgu);
    switch(sorgu)
    {case 'e':
     case 'E':
        i++; q=1; w=1; e=1; r=0; t=1; break;
    case 'h':
    case 'H':
        i=0; r=0; break;
    default:
        printf("\nYanlis deger girdiniz!");
    }}
sayac++;}
stoplam=s15+s20+s27+s35;
//*******************ISTATISTIKLER SAYFASI***********************
printf("\n*****************************ISTATISTIKSEL BILGILER*****************************");
printf("\n********************************************************************************");
printf("\nTum kullanicilara odenen toplam net ucret:%.2f",toplam_net);
printf("\nDevlete aktarilan toplam vergi:%.2f",toplam_vergi);
printf("\nAylik toplam brut ucretlerinin ortalamasi:%.2f",toplam_brut_tum/sayac);
printf("\nNet ucretlerinin ortalamasi:%.2f",toplam_net/sayac);
printf("\n\n\t************Gerekli Olan Para Sayilari************\n");
printf("\n   200'luk banknotlardan: %d adet",s1);
printf("\t1'TL madeni para: %d adet",s7);
printf("\n   100'luk banknotlardan: %d adet",s2);
printf("\t50'kurusluk madeni para: %d adet",s8);
printf("\n   50'lik banknotlardan: %d adet",s3);
printf("\t        25'kurusluk madeni para: %d adet",s9);
printf("\n   20'lik banknotlardan: %d adet",s4);
printf("\t        10'kurusluk madeni para: %d adet",s10);
printf("\n   10'luk banknotlardan: %d adet",s5);
printf("\t        5'kurusluk madeni para: %d adet",s11);
printf("\n   5'lik banknotlardan: %d adet",s6);
printf("\t        1'kurusluk madeni para: %d adet",s12);
printf("\n\n2000 TL nin altinda aylik net ucret alan calisanlarin sayisi:%d",b);
printf("\n\n%%15 Vergi orani icin calisan sayisi:%d  Yuzdeligi:%%%.2f",s15,100*s15/stoplam);
printf("\n%%20 Vergi orani icin calisan sayisi:%d  Yuzdeligi:%%%.2f",s20,100*s20/stoplam);
printf("\n%%27 Vergi orani icin calisan sayisi:%d  Yuzdeligi:%%%.2f",s27,100*s27/stoplam);
printf("\n%%35 Vergi orani icin calisan sayisi:%d  Yuzdeligi:%%%.2f",s35,100*s35/stoplam);
printf("\n*****************Aylik toplam brut ucreti en yuksek olan calisan****************");
printf("\nTc no:%lld",brut_tc);
printf("\nAdi Soyadi:%s",brut_ad);
printf("\nAylik toplam brut ucreti:%.2f",yuksek_brut);
printf("\nGelir vergisi kesintisi:%.2f",yuksek_brut_g);
printf("\nAylik net ucreti:%.2f",yuksek_brut_anet);
printf("\n*****************Aylik toplam net ucreti en yuksek olan calisan*****************");
printf("\nTc no:%lld",net_tc);
printf("\nAdi Soyadi:%s",net_ad);
printf("\nAylik toplam brut ucreti:%.2f",yuksek_net_brut);
printf("\nGelir vergisi kesintisi:%.2f",yuksek_net_g);
printf("\nAylik net ucreti:%.2f",yuksek_net);
printf("\n\n********************************************************************************");
printf("\n***%d kullanicinin toplami*** \nevli olanlarin%%%.2f ini \nbekar olanlarin%%%.2f ini olusturmaktadir.\n",sayac,evli*100/sayac,bekar*100/sayac);
if(evli==0)
printf("evli olan %.0f kullanicidan esleri de calisanlarin yuzdezi:%%%.2f",evli,calisan*100/(evli+1));
else printf("evli olan %.0f kullanicidan esleri de calisanlarin yuzdezi:%%%.2f",evli,calisan*100/evli);
if (toplam_cocuk==0)
printf("\ncalisanlarin bakmakla yukumlu olduklari cocuk sayisinin ortalamasi:%%0.00");
else printf("\ncalisanlarin bakmakla yukumlu olduklari cocuk sayisinin ortalamasi:%.2f",toplam_cocuk/sayac);
printf("\nBakmakla yukumlu oldugu cocuk sayisi 3 ten fazla olan calisanlarin sayisi:%d",sayi);
printf("\nEngelli calisanlarin sayisi %.0f tum calisanlar icindeki yuzdesi:%%%.2f\n\n",engel_sayi,engel_sayi*100/sayac);
return 0;
}
