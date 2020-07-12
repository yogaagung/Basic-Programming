#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\t\t\t ================ Pertemuan 3 ================\n");
    puts("\t\t\t Latihan 1");

/*
    // Deklarasi Variable
    char Namamahasiswa[50];
    char Nimmahasiswa [20];
    int Nokompi;

    // Proses Input
    printf(" Input Namamahasiswa");
    gets(Namamahasiswa);
    printf(" Input Nimmahasiswa");
    gets(Nimmahasiswa);
    printf(" Input Nokompi");
    scanf(" Nokompi : %d\n", Nokompi);

    //Proses Output
    puts("=============Hasil Output=============");
    printf("Yoga Agung N     = %s\n", Namamahasiswa);
    printf("A11.2015.08964   = %d\n", Nimmahasiswa);
    printf("48               = %d\n", Nokompi);

*/
/*
    puts("\t\t\t Latihan 2");


    // Deklarasi Variable
    int sebuahangka;

    // Menggunakan perintah Assigment 1
    sebuahangka = 15;

    // Output
    printf(" Nilai variable sekarang : %d\n", sebuahangka);


    // Assigment 2
    sebuahangka++; // sebuah angka + 1

    // Output
    printf(" Nilai variable sekarang : %d\n", sebuahangka);


    // Assigment 3
    sebuahangka+=10; // sebuah angka +10

    // Output
    printf(" Nilai variable sekarang : %d\n", sebuahangka);
*/



puts("\t\t\t Latihan 1");

// Deklarasi Variable
char nama [50];
char nim [20];
char nokompi[30];
int gelasa;
int gelasb;

//Proses Input
printf(" Input Nama  :");
gets(nama);
printf(" Input NIM   :");
gets(nim);
printf(" Input Nokompi :");
gets(nokompi);
printf(" Input isi gelas a :");
scanf("gelasa = %d\n", gelasa);
printf(" Input isi gelas b :");
scanf("gelasb = %d\n", gelasb);

// Proses Output
puts("\n----------------Output----------------\n");
printf(" Nama        = %s\n", nama);
printf(" NIM         = A11.2015.08964\n", nim);
printf(" Nokompi     = empat puluh delapan\n", nokompi);
printf(" Isi gelas a = %d liter\n", gelasa);
printf(" Isi gelas b = %d liter\n", gelasb);















    return 0;
}
