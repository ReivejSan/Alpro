///Nama         : Jevier Izza Maulana
///NIM          : A11.2018.11010
///Kelompok     : A11.4204

#include "pustaka.h"
int arr1[]={3,5,38,0,44,47};
int arr2[]={3,0,44,38,0,5,47};
int arr3[]={2,15,0,0,0,26,27,36};
int arr4[]={15,36,27,0,0,2,26};

int main()
{
    compress_array(arr1,6);
    printfarray(arr1,6);
    puts(" ");
    compress_array(arr2,7);
    printfarray(arr2,7);
    puts(" ");
    compress_array(arr3,8);
    printfarray(arr3,8);
    puts(" ");
    compress_array(arr4,7);
    printfarray(arr4,7);
    puts(" ");
    getchar();
    return 0;
}
