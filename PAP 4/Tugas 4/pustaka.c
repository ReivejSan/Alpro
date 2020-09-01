#include "sirahe.h"

int get_median(int data[],int jml_data)
{
    int a,b,temp;
    temp=0;
    for(a=0;a<jml_data;a++)
    {
        for(b=a+1;b<jml_data;b++)
        {
            if(data[a]>data[b])
            {
                temp=data[a];
                data[a]=data[b];
                data[b]=temp;
            }
        }
    }
}

void nyetak(int data[],int jml_data)
{
    int i;
    for(i=0;i<jml_data;i++)
    {
        printf("%d ",data[i]);
        if(jml_data==3)
        {
            printf("Median = %d",data[i]);
        }
    }
}
