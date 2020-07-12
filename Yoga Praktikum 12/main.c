#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarasi Array Integer
    int gerbong_Kereta [10] = {}; //Inisialisasi
    int kondektur;
    int ringan = 0;
    int berat = 0;

    // Pengisian Nilai Array
    // Sesuai Indeks Gerbongnya
    gerbong_Kereta [0] = 30;
    gerbong_Kereta [1] = 15;
    gerbong_Kereta [2] = 60;
    gerbong_Kereta [3] = 78;
    gerbong_Kereta [4] = 10;
    gerbong_Kereta [5] = 100;
    gerbong_Kereta [6] = 45;
    gerbong_Kereta [7] = 27;
    gerbong_Kereta [8] = 66;
    gerbong_Kereta [9] = 36;

    // Cetak Isi Dari Gerbong / Arraynya
     // printf("Isi gerbong ke - 2 = %d\n", gerbong_Kereta[2]);
     // printf("Isi gerbong ke - 4 = %d\n", gerbong_Kereta[4]);

     // Cetak Isi Array Dengan Loopimg
     kondektur = 0; // Posisikan Kondektur digerbong Awal


     // Selama Kondektur Tidak diakhir Gerbong, maka
     while (kondektur != 10)
     {
         printf("[%d] -",gerbong_Kereta[kondektur]);
         kondektur += 1;

         if (gerbong_Kereta [kondektur] <= 50)
         {
            ringan = ringan+gerbong_Kereta[kondektur];
         }
         else
         {
             berat = berat+gerbong_Kereta[kondektur];
         }
         kondektur ++;
     }
     printf("muatan ringan = %d dan berat = %d", ringan,berat);




    return 0;
}
