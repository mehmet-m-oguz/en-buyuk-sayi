#include <stdio.h>
 void sonuc (int t, int *saat, int *dk, int *sn)
 {
 *saat= t/3600;
 t=t- *saat * 3600;
 *dk= t/60;
 *sn=t- *dk * 60;
 }
 
 
int main(void)
{
    int toplam;
    int saat,dakika,saniye;
    printf(" yolculuk kac saniye surdu:");
    scanf("%d", &toplam);
    sonuc (toplam, &saat, &dakika, &saniye);
    printf("yolculuk %d saat, %d dakika, %d saniye surdu.", saat, dakika, saniye);

    return 0;