#include <stdio.h>
#include <stdlib.h>

#include "header.h"
/*
X1 = 1550;
Y1 = 1655;
Z1 = 2000;
X2 = 2000;
Y2 = 2000;
Z2 = 4000;
*/

int main()
{
   /*
    float pangkat;
    float akar;

    pangkat = powf(5 , 2);
    akar = sqrtf(25);
    printf("Akar = %.2f , Pangkat = %.2f\n", akar , pangkat);
*/
    // 1. Set Nilai Alas dan Tingginya
    setAtributSegitiga(30.5 , 10);

    // 2. Tampilkan Informasi Segitiga
    TampilkanLuas();

    // 1. Set Nilai Alas dan Tingginya
    setAtributSegitiga(37.5 , 72.66);

    // 2. Tampilkan Informasi Segitiga
    TampilkanLuas();
    return 0;
}
