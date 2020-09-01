#include "pustaka.h"

void bintang()
{
    for(a=1;a<=input;a++)
    {
        for(b=input;b>=a;b--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        for(b=a-1;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=1;a<=input-1;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf(" ");
        }
        for(b=1;b<=input-a;b++)
        {
            printf("*");
        }
        for(b=input-a-1;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
}
}

