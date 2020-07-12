#include <stdio.h>
#include <stdlib.h>

int main()
{

    puts("\t\t=========== Latihan FOR ==========\n");

    // Deklarasi variable loop
    int nomer;
    int jumlahLoop;

    // Proses Input
    printf("Input banyaknya loop= ");
    scanf("%d",&jumlahLoop);

    // Proses Looping
    for(nomer = 1 ; nomer <= jumlahLoop ;nomer += 1)
    {
        printf("%d.) Saya lupa makan\n", nomer);
    }


    puts("\t\t=========== Latihan WHILE ============\n");


    //Deklarasi Variable loop
    int inputAngka;

    // Proses Input angka
    printf("Input angka = ");
    scanf("%d",&inputAngka);

    // Proses loop while
    while (inputAngka!=999) // Kondisi Loopnya
    {
        printf("Input angka lagi = ");
        scanf("%d", &inputAngka);
    }
    puts("Looping s'lesai");


    puts("\t\t=========== Latihan Nested Loop - 1 ===========\n");


    //Deklarasi Variable Loop luar
    int banyakOrang;
    int orang;

    //Deklarasi Variable Loop Dalam
    int banyakRoti;
    int roti;

    // Proses input bnyak org
    printf("Berapa banyak orang ? = ");
    scanf("%d", &banyakOrang);

    // Proses Loop Luar
    for (orang = 1 ; orang <= banyakOrang; orang +=1)
    {
        printf("Orang ke - %d\n", orang);

        // Proses input roti perorang
        printf("\t\tJumlah roti = ");
        scanf("%d", &banyakRoti);

        printf("\t\t"); // Rotinya geser ke kanan

        // Proses loop dalam
        for (roti = 1 ; roti <= banyakRoti; roti += 1)
        {
            printf("\x01 ");
        }

        printf("\n"); // Pindah baris
    }


    puts("\t\t=========== Latihan Nested Loop - 2 ===========\n");

    // Deklarasi Variable Loop Luar
    int baris;
    int jumlahBaris;

    // Deklarasi Variable Loop Dalam
    int kolom;
    int jumlahKolom;

    // Proses Input Baris
    printf("Input Jumlah Baris = ");
    scanf("%d", &jumlahBaris);

    // Proses Input Kolom
    printf("Input Jumlah Kolom = ");
    scanf("%d", &jumlahKolom);

    // Proses Loop Luar
    for (baris = 1 ; baris <= jumlahBaris; baris += 1)
    {
        // Proses Loop Dalam
        for (kolom = 1 ; kolom <= baris; kolom += 1)
        {
            // Cetak Polanya
            printf("\x04 ");
        }
        // Pindah Baris
        printf("\n");

    }

    return 0;
}
