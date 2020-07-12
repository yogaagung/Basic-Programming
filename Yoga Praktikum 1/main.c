#include <stdio.h>
#include <stdlib.h>
/*
 Nama : Yoga Agung Nugroho
NIM : A11.2015.08964
*/
// Yoga Agung N
// A11.2015.08964
int main()
{
    puts("============== Latihan 1 ===============");
    puts("\t\t\tData Diri");
    puts("\t\t\t---- ----\n\n");

    puts("======================================");
    printf("Nama        : Yoga Agung N\n");
    printf("NIM         : A11.2015.08964\n");
    printf("Alamat      : Jalan manasaja no00\n");
    printf("Hobi        : PSan,Laptopan\n");
    printf("Kelompok    : A11.4108\n");
    printf("Matkul      : Dasar Pemrograman\n");
    puts("--------------------------------------");

    puts("================ Latihan 2 ==============");

    int Kotakapel; //deklarasi/pesan tempat
    int Kotak_Jeruk; //deklarasi/pesan tempat
    int Totalkotak; //deklarasi variable.

    float Segelasair; //deklarasi 1
    float Butiranbleduk; //deklarasi 2
    float Totalbox; //deklarasi 3.

    Kotakapel = 1000; //pengisian variabel 1.
    Kotak_Jeruk = 200; //pengisian variabel 2.
    Totalkotak = Kotakapel + Kotak_Jeruk; // penjumlahan variabel.

    Segelasair = 412.36; //pengisian variabel 3
    Butiranbleduk = 23.5; //pengisian variabel 4
    Totalbox = Segelasair + Butiranbleduk;

    // menampilkan variabel integer ke consol
    printf("isi Kotakapel = %d\n",Kotakapel);
    printf("isi Kotak Jeruk = %d\n",Kotak_Jeruk);
    printf("Hasil Jumlahnya >>>> %d + %d = %d buah\n",Kotakapel,Kotak_Jeruk,Totalkotak);

    //menampilkan variable float ke consol
    printf("isi Segelasair = %f liter \n",Segelasair);
    printf("isi Butirabbleduk = %f kg \n",Butiranbleduk);
    printf("Hasil Jumlah >>>> %f + %f = %f\n",Segelasair,Butiranbleduk,Totalbox);

    return 0;
}
