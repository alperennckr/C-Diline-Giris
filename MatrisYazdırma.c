#include <stdio.h>
#include <time.h>
int main()
{

    int satir,sutun;
    printf("\nMatrisinizin Satir Sayisini Giriniz: ");
    scanf("%d",&satir);

    printf("Matrisinizin Sutun Sayisini Giriniz: ");
    scanf("%d",&sutun);
    int matris[satir][sutun];
    srand(time(NULL));

    int i,j;

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            matris[i][j]=rand()%10;
        }
    }
    printf("\n-MATRISINIZ-\n\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf(" %d ",matris[i][j]);
        } printf("\n");
    }
    return 0;
}
