///Nama     : Jevier Izza Maulana
///NIM      : A11.2018.11010
///Kelompok : A11.4204

#include <stdio.h>
#include <stdlib.h>

int nambahi(int ongko1, int ongko2)
{
    return (ongko1+ongko2);
}

void main()
{
    int nomer1;
    int nomer2;

    printf("Masukkan angka pertama\t: ");
    scanf("%d", &nomer1);
    printf("\nMasukkan angka kedua\t: ");
    scanf("%d",&nomer2);
    printf("Total Penjumlahan = %d",nambahi(nomer1,nomer2));
    getchar();
}
