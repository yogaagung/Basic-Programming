#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main()
{
    // Deklarasi Variable
    int angka1;
    int angka2;
    char oprtr;

    // Proses Input
    printf("Input Angka dan Operator = ");
    scanf("%d %d %c", &angka1 , &angka2 , &oprtr);

    // Pemanggilan Prosedur
    // kalkulator , dan 3 Parameter
    Kalkulator(oprtr , angka1 , angka2);




    return 0;
}
