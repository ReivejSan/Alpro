#include "header.h"

void selection_sort1(int data[], int jml_data)
{
    int a,b,c,temp;
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
        for(c=0;c<jml_data;c++)
        {
            printf("%d ",data[c]);
        }
        printf("\n");
    }

}

void nyetak(int data[], int jml_data)
{
    int i;
    for(i=0;i<jml_data;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}
