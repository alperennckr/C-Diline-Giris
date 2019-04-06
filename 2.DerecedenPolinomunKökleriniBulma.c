#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;

    printf("---- Ax^2 + Bx + C ----\n");

    printf("A sayisini giriniz: ");
    scanf("%d",&a);

    printf("B sayisini giriniz: ");
    scanf("%d",&b);

    printf("C sayisini giriniz: ");
    scanf("%d",&c);

    float delta=pow(b,2)-(4*a*c);
    float x1= ((-1*b)-(sqrt(delta)))/(2*a);
    float x2= ((-1*b)+(sqrt(delta)))/(2*a);

    if(x1==x2)
        printf("tek kok= %.3f",x1); // x2 de yazılabilir sonucta esit

    else{
    printf("ilk kok    = %.3f\n",x1);
    printf("ikinci kok = %.3f",x2);
    }

    return 0;
}
