#include <stdio.h>

void  dikdortgen(int en, int boy, int *alan, int *cevre)
{
    *alan=en*boy;
    *cevre=2*(en+boy);
}




int main(void)
{
    int en=0, boy=0;
    int alan, cevre;
    
    printf(" en ve boy giriniz:");
    scanf(" %d%d", &en, &boy);
    dikdortgen(en, boy, &alan, &cevre);
    printf(" alan= %d, cevre= %d", alan,cevre);

    return 0;
}
