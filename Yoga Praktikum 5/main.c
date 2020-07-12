#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\t\t----------------------- Pertemuan 5 ====================\n\n");

    // Deklarasi variable
    int Bilangan_1;
    int Bilangan_2;
    char OPERATOR;
    int Hasil;

    // Proses input
    printf("Input Ekspresi Aritmatika = ");
    scanf("%d %c %d",&Bilangan_1, &OPERATOR, &Bilangan_2);

    // Kondisional
    if (OPERATOR == '+')
    {
        Hasil = Bilangan_1 + Bilangan_2;
    }
    else if (OPERATOR == '*')
    {
        Hasil = Bilangan_1 * Bilangan_2;
    }
    else if (OPERATOR == '-')
    {
        Hasil = Bilangan_1 - Bilangan_2;
    }
    else if (OPERATOR == '/')
    {
        Hasil = Bilangan_1 / Bilangan_2;
    }
    else if (OPERATOR =='%')
    {
        Hasil = Bilangan_1 % Bilangan_2;
    }
    else
    {
        puts("Operatornya Kosong! Input Tanda Tanya");
    }


    // Kondisi Terakhir

    // Proses Cetak
    printf("Hasil Aritmatika, %d %c %d = %d", Bilangan_1,OPERATOR,Bilangan_2,Hasil);

        if (Hasil >=0 && Hasil <9)
    {
        puts("\nSatuan");
    }
    else if (Hasil >=10 && Hasil <100)
    {
        puts("\nPuluhan");
    }
    else if (Hasil >=100 && Hasil <1000)
    {
        puts("\nRatusan");
    }
    else if (Hasil >=1000)
    {
        puts("\nLebih dari ribuan atau negatif");
    }

    return 0;
}
