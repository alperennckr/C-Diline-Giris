#include <stdio.h>
#include <stdlib.h>
int main()
{
  int sayi1,sayi2;
  printf("Birinci sayiyi giriniz: ");
  scanf("%d",&sayi1);
  printf("Ikinci sayiyi giriniz: ");
  scanf("%d",&sayi2);
  
  int toplam=sayi1+sayi2;
  printf("Sayilarin toplami= %d",toplam);

  return 0;
}
