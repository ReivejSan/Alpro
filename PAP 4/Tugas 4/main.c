///Nama         : Jevier Izza Maulana
///NIM          : A11.2018.11010
///Kelompok     : A11.4204

#include "sirahe.h"

int arr1[]={3,44,38,5,47};
int arr2[]={15,36,27,2,26};

int main()
{
    int jumlahe1=sizeof(arr1)/sizeof(int);
    int jumlahe2=sizeof(arr2)/sizeof(int);
    get_median(arr1,jumlahe1);
    nyetak(arr1,jumlahe1);
    printf("\n");
    get_median(arr2,jumlahe2);
    nyetak(arr2,jumlahe2);
    getchar();
    return 0;
}
