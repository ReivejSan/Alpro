#include "pustaka.h"

void hitungarr(int data[], int jml)
{
    int a,more;
    more=0;
    for(a=0;a<jml;a++)
    {
        if(data[a]!=0)
        {
            more+=1;
        }
    }
    printf("%d\n",more);
}
