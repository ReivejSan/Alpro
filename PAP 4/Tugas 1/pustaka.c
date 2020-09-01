#include "pustaka.h"

void compress_array(int data[], int jml)
{
    int a,b,temp=0;

    for (a=0;a<jml;a++)
    {
        for(b=a+1;b<jml;b++)
        {
            if(data[b]<data[a])
            {
                temp=data[a];
                data[a]=data[b];
                data[b]=temp;
            }
        }

    }
}

void printfarray(int data[], int jml)
{
    int i;
    for(i=0;i<jml;i++)
    {
        if(data[i]!=0)
        {
            printf("%d ",data[i]);
        }
    }
}
