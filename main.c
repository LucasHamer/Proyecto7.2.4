#include <stdio.h>
#include <stdlib.h>

void sumacolum(int [][4],int [],int ,int );
int main()
{
    int mat[5][4]={{0}};
    int vecsumacol[4];
    int x,i;

    for(x=0;x<5;x++)
    {
        for(i=0;i<4;i++)
        {
            printf("Ingrese para la fila %d la columna %d: ",x+1,i+1);
            scanf("%d",&mat[x][i]);
        }
    }

    sumacolum(mat,vecsumacol,5,4);

    for(x=0;x<4;x++)
    {
        printf("%d\n",vecsumacol[x]);
    }

    return 0;
}
void sumacolum(int mati[][4],int vec[],int cf,int cc)
{
    int x,i;

    for(i=0;i<cc;i++)
    {
        vec[i]=0;
        for(x=0;x<cf;x++)
        {
            vec[i]+=mati[x][i];
        }
    }
}
