#include <stdio.h>
#include <stdlib.h>

// Deklarasi Struktur
typedef struct
{
    char nama_laptop[10];
    char seri_laptop[10];

    float harga_laptop;

    int RAM_laptop;

}THE_LAPTOP;

// Fungsi Untuk Input
THE_LAPTOP inputLaptop ()
{
    THE_LAPTOP hasil; // Variable Untuk Nilai Balik

    // Proses Output
        fflush(stdin);
    printf("> Input Merk   : "); gets(hasil.nama_laptop);
    printf("> Input Seri   : "); gets(hasil.seri_laptop);
        fflush(stdin);
    printf("> Input Harga  : "); scanf("%f",&hasil.harga_laptop);
        fflush(stdin);
    printf("> Input RAM    : "); scanf("%d",&hasil.RAM_laptop);

    return hasil;
}

// Prosedur Untuk Menampilkan Variable
void outputLaptop (THE_LAPTOP lptop)
{
    puts("\n-------------- Detail Laptop ---------------");
    printf("> Merk Laptop   : %s\n",lptop.nama_laptop);
    printf("> Seri Laptop   : %s\n",lptop.seri_laptop);
    printf("> Harga Laptop  : %.2f\n",lptop.harga_laptop);
    printf("> RAM Laptop    : %d\n",lptop.RAM_laptop);
}

int main()
{
    // Deklarasi Variable Array
    int banyakLp;
    printf("Berapa Laptop Yang Dipesan ?"); scanf("%d", &banyakLp);
    // Deklarasikan Variable Laptop
    THE_LAPTOP sebuahLaptop[banyakLp];

    return 0;
}
