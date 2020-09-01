///Nama         : Jevier Izza Maulana
///NIM          : A11.2018.11010
///Kelompok     : A11.4204

#include "kepala.h"

int arr1[]={3,44,38,5,47};
int arr2[]={15,36,27,2,26};

int main()
{
    int banyak1=sizeof(arr1)/sizeof(int);
    int banyak2=sizeof(arr2)/sizeof(int);
    selection_sort2(arr1,banyak1);
    nyetak(arr1,banyak1);
    printf("\n");
    selection_sort2(arr2,banyak2);
    nyetak(arr2,banyak2);
    getchar();
    return 0;
}
