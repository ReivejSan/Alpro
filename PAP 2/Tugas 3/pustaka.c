#include "pustaka.h"

void prima()
{
    for(a=1;a<=input;a++)
    {
        prime=0;
        for(b=1;b<=input;b++)
        {
            if(a%b==0)
            {
                prime++;
            }
        }
    }
    if(prime==2)
    {
        printf("Bilangan Prima");
    }
    else
    {
        printf("Bukan Bilangan Prima");
    }
}

