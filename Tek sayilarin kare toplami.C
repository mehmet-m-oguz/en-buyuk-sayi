#include <stdio.h>

int
main ()
{
  int a = 0, degisken = 0, toplam = 0;

  printf ("Bir sayi giriniz:");
  scanf ("%d", &degisken);
  for (a = 0; a <= degisken; a++)
    {
      if (a %2 == 1)
    	{
    	  printf ("%d sayisi tektir.", a);
    	  toplam = a + toplam;
    	  printf ("a= %d, toplam= %d\n", a, toplam);
    	}
    }
}