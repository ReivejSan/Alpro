#include "pustaka.h"
void urut(int data[], int jml)
{
    int x,y;
    int cek;
    cek=0;

    for(x=0;x<jml-1;x++)
    {
        y=x-1;
        for(y=0;y<jml;y++)
        {
            if(data[y]>data[x])
            {
                cek+=1;
            }
        }
    }
    if(cek!=0)
    {
        printf("Urut\n");
    }
    else
    {
        printf("\nTidak Urut");
    }
}
