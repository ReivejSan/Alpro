#include "pustaka.h"

int nyocokke()
{
    for(a=0;a<strlen(nginpute);a++)
    {
        if(nginpute[a]=='a'||nginpute[a]=='A'||nginpute[a]=='i'||nginpute[a]=='I'||nginpute[a]=='u'||nginpute[a]=='U'||nginpute[a]=='e'||nginpute[a]=='E'||nginpute[a]=='o'||nginpute[a]=='O')
        {
            vokale++;
        }
    }
    return vokale;
}
