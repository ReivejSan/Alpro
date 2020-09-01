#include "pustaka.h"

void bubblesort1(int data[], int x)
{
    int a,b;
    int arr1[]={3,44,38,5,47};
    int arr2[]={15,36,27,2,26};
    for(a=0;a<x-1;a++)
    {
        b=a-1;
        for(b=0;b<x;b++)
        {
            if(data[b]>data[a])
            {
                int slot=data[a];
                data[a]=data[b];
                data[b]=slot;
            }
        }
    }
}
