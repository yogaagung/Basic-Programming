#include <stdio.h>
#include <stdlib.h>

// A. Prototype Fungsinya
int Max2 (int a, int b); // Mencari Nilai Max 2 Angka
int Max3 (int a, int b, int c); // Cari Nilai Max 3 Angka


// B. Ini Drivernya/Fungsi Utama
int main()
{
    int angka1;
    int angka2;
    int nilaiMax;

    angka1 = 100;
    angka2 = 400;

    // Pemanggilan Fungsi ke 1, tanpa variable
    printf("Nilai max dari 9 dan 23 = %d\n,", Max2(9,23));
    printf("Nilai max dari 879 dan 98 = %d\n,", Max2(879,98));

    // Pengambilan Fungsi dengan Variable
    nilaiMax = Max2(angka1 , angka2);
    printf("Nilai Max = %d\n",nilaiMax);

    // Pemanggilan Fungsi ke - 3
    printf("Nilai max dari 80 60 100 = %d\n", Max3(80,60,100));


    return 0;
}

// C. Badan dan Spesifikasi Fungsinya
int Max2 (int a, int b)
{
    // Variable Penampung Hasil Fungsinya
    int hasil;

    if (a >= b)
    {
        hasil = a;
    }
    else
    {
        hasil = b;
    }

    // Respon / Nilai balik dari Fungsi
    return hasil;
}

int Max3 (int a, int b, int c)
{
    int hasil;

    hasil = Max2(Max2(a,b) , c);

    return hasil;
}
