#include "pustaka.h"
void bubblesort2(int data[], int jml)
{
    int a,b,temp;
    for(a=0;a<jml-1;a++)
    {
        b=a-1;
        {
            for(b=0;b<jml;b++)
            {
                if(data[b]>data[a])
                {
                    temp=data[a];
                    data[a]=data[b];
                    data[b]=temp;
                }
            }
        }
    }
}
