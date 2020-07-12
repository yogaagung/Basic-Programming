#include "header.h"
/*
// Fungsi
float LuasSegitiga ()
{
    return ((alas * tinggi) / 2);
}

// Prosedur
void TampilkanLuas ()
{
    // Variable Lokal
    float luasSegitiga;

    // Memanggil Fungsi Luas Segitiga
    luasSegitiga = LuasSegitiga();

    // Tampilkan Hasilnya
    printf("Segitiga dengan Alas = %.2f , Tinggi = %.2f , Luas = %.2f\n", alas , tinggi , luasSegitiga );
}

void setAtributSegitiga (float als , float tgg)
{
    // Memberi Inisialisasi Nilai ke Variable Global
    alas = als;
    tinggi = tgg;
}
*/

// Fungsi
void ShowPoint (float x , float y, float z)
{
    printf("%.2f, %.2f , %.2f\n", x, y, z );
}
float hitungJarak ()
{
    return sqrt(powf(X2 - X1 , 2) + powf(Y2 - Y1, 2) + powf(Z2 - Z1, 2));
}

// Prosedur
void Keterangan (float jarak)
{
    float jarak;

    jarak = hitungJarak();
    printf("Jarak kota = %.2f\n", jarak);


}
