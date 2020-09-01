///Nama         : Jevier Izza Maulana
///NIM          : A11.2018.11010
///Kelompok     : A11.4204

#include "pustaka.h"
int main()
{
    int arr1[5]={3,44,38,5,47};
    int arr2[5]={15,36,27,2,26};
    int i=0;

    bubblesort2(arr1,5);
    {
        for(i=0;i<5;i++)
        {
            printf("%d ",arr1[i]);
        }
    }
    printf("\n\n");
    bubblesort2(arr2,5);
    {
        for(i=0;i<5;i++)
        {
            printf("%d ",arr2[i]);
        }
    }
    getchar();
    return 0;
}

///Nek salah yo maaf mas/mbak aslab :)

