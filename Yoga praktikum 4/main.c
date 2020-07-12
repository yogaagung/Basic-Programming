#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BOOLEAN;
#define TRUE 1
#define FALSE 0

int main()
{
    puts("\t\t =========Pertemuan 4 ==========\n\n");

    //Deklarasi variable
    BOOLEAN Logika;

    // And
    Logika = FALSE && TRUE;
    printf("Hasil Logika adalah  = %d\n",Logika);

    // OR
    Logika = TRUE || FALSE;
    printf("Hasil Logika adalah  = %d\n",Logika);

    // NOT
    Logika = !FALSE;
    printf("Hasil Logika adalah  = %d\n",Logika);

    puts("============= RELASIONAL ===========\n");

    int UTS = 85;
    int UAS = 77;

    Logika = UTS > 90;    printf("Hasil logika > adalah  = %d\n", Logika);

    Logika = UAS <= 77;
    printf("Hasil logika <= adalah = %d\n", Logika);

    Logika = UTS == UAS; // apakah nilai UTS = UAS
    printf("Hasil logika == adalah = %d\n", Logika);

    Logika = UTS != UAS; // apakah UAS tdk sama dgn UTS
    printf("Hasil logika != adalah = %d\n", Logika);

    Logika = (UTS >= 95) && (UAS == 76); // 0 && 0
    printf("Hasil logika gabungan adalah = %d\n", Logika);



    return 0;
}
