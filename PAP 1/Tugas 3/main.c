///Nama     : Jevier Izza Maulana
///NIM      : A11.2018.11010
///Kelompok : A11.4204

#include <stdio.h>
#include <stdlib.h>

char nginput;
float kalkulator(int nomer1, int nomer2)
{
    if(nginput == 'x')
    {
        return(nomer1*nomer2);
    }
    else if(nginput == '+')
    {
        return(nomer1+nomer2);
    }
    else if(nginput == '/')
    {
        return(nomer1/nomer2);
    }
    else if(nginput == '-');
    {
        return(nomer1-nomer2);
    }
}

void main()
{
    int ongko1;
    int ongko2;

    printf("Masukkan angka pertama\t: ");
    scanf("%d", &ongko1);
    printf("\nMasukkan angka kedua\t: ");
    scanf("%d",&ongko2);
    printf("\nMasukkan operator (+,-,x,/): ");
    scanf("%c",&nginput);
    printf("Hasil Operasi = ",kalkulator(ongko1,ongko2));
    getchar();
}
