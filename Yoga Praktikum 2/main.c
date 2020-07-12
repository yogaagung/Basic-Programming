#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Info Program
    puts("\t\t\t Pertemuan 2");
    puts("\t\t\t --------- - \n\n");

    puts("Nama   : Yoga Agung N");
    puts("NIM    : A11.2015.08964");
    puts("Tanggal: 25 September 2015");

    puts("=================== Latihan 1 =================");

    //Deklarasi Variable Segitiga
    int alas;
    int tinggi;
    int luasSegitiga;

    //Deklarasi Variable Lingkaran
    float radius;
    float luasLingkaran;


    // Pengisian Variable Segitiga
    alas = 64;
    tinggi = 30;

    //Pengisian Variable Lingkaran
    radius = 3.7;

    //Perhitungan Variable Segitiga
    luasSegitiga = alas * tinggi / 2;

    //Perhitungan Variable Lingkaran
    luasLingkaran = 3.14 * radius * radius;


    // Menampilkan Variable / Hasilnya
    puts("\t Luas Segitiga");
    printf("> Alas     = %d cm\n",alas);
    printf(">Tinggi    = %d cm\n",tinggi);
    printf("> Luasnya  = %d cm\n",luasSegitiga);

    //Menampilkan Variable Lingkaran
    puts("\t Luas Lingkaran");
    printf("Jari - jari      = %.2f cm , Luasnya    = %.2f cm\n",radius, luasLingkaran);





    puts("==================== Latihan 2 =====================");

    // Deklarasai dan Pengisian Variable Char dan String
    char NilaiPredikat = 'Y'; //Karakter Tunggal
    char namaMahasiswa [50] = "Yoga Agung N"; // String

    //MEnampilkan Variable
    printf("> Nilai Karakter    = %c \n",NilaiPredikat);
    printf("> Namaku            = %s \n",namaMahasiswa);



    puts("==================== Latihan 3 =====================");

    //Deklarasi Variable Nilai
    float nilaiTugas;
    float nilaiUTS;
    float nilaiUAS;

    float nilaiRata;

    // Proses input dari keyboard / user
    puts("\t\t Data Nilai Mahasiswa");
    puts("\t\t ---- ----- ---------");

    printf("Input Nilai Tugas ="); // Untuk memberi notif
    scanf("%f", &nilaiTugas);

    printf("Input Nilai UTS   =");
    scanf("%f", &nilaiUTS);

    printf("Input Nilai UAS   =");
    scanf("%f", &nilaiUAS);


    //Perhitungan Nilai
    nilaiRata = (nilaiTugas + nilaiUTS + nilaiUAS) / 3;

    // Manampilkan Variable Nilai
    puts("============= Hasil Nilai ==========");
    printf("> Nama Mahasiswa    = %s\n",namaMahasiswa);
    printf("> Nilai Tugas       = %.2f\n",nilaiTugas);
    printf("> Nilai UTS         = %.2f\n",nilaiUTS);
    printf("> Nilai UAS         = %.2f\n",nilaiUAS);
    puts("--------------------------------------------");
    printf("> Nilai Rata - rata = %.2f\n",nilaiRata);


    return 0;
}
