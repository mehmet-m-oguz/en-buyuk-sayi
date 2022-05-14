#include <stdio.h>
void fon (int a, int b, int *carp, int *topla, int *cikart, double *bol)
{ 

 *carp = a * b;
 *topla = a+b;
 *cikart = a-b;
 *bol= (double)a/(double)b;

}
int main(void)
{
    int x,y;
    int carp, topla, cikart;
    double bol;
    printf(" iki sayi giriniz:");
    scanf("%d%d", &x,&y);
    fon(x,y, &carp, &topla, &cikart, &bol);
    printf("carp= %d, topla= %d, cikartma= %d, bolme=%f", carp, topla,cikart,bol);

    return 0;
}