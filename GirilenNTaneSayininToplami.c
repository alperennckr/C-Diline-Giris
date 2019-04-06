#include<stdio.h>

int main(){

    int n,a=0,sayi,i;

    printf("Kac tane sayiyi toplamak istiyorsunuz: ");
    scanf("%d",&n);

    int dizi[n];

    while(a<n)
    {
        printf("%d. sayiyi giriniz:",a+1);
        scanf("%d",&sayi);
        dizi[a]=sayi;
        a++;
    }
    int toplam=0;
    for(i=0;i<n;i++)
    {
        toplam+=dizi[i];
    }
    printf("Girdiginiz sayilarin toplami= %d",toplam);
    return 0;
}
