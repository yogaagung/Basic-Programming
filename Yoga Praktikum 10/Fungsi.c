#include "Header.h"

// Fungsi
int tambah (int num1 , int num2)
{
    return num1 + num2;
}

int Modulo (int num1 , int mod)
{
    int hasil;

    hasil = num1 % mod;

    return hasil;
}

int kurang (int num1 , int num2)
{
    return num1 - num2;
}
int pangkat(float num1 , float num2)
{
    float hasil =1;
    while (pangkat > 0)
    {
        hasil = hasil * angka;
        pangkat --;
    }

        return hasil;
}

// Prosedur
void Kalkulator (char opr , int oprnd , int oprnd2)
{
    if (opr == '+')
    {
        printf("Hasil %d + %d = %d\n", oprnd , oprnd2 , tambah(oprnd,oprnd2));
    }
    else if (opr == '-')
    {
        printf("Hasil %d - %d = %d\n", oprnd , oprnd2 , kurang(oprnd,oprnd2));
    }
    else if (opr == '%')
    {
        printf("Hasil %d mod %d = %d\n", oprnd , oprnd2 , Modulo(oprnd,oprnd2));
    }
    else if (opr == '^')
    {
        printf("Hasil %.2f pangkat %02f = %.2f\n", oprnd , oprnd2 , pangkat(oprnd,oprnd2));
    }
    else
    {
        puts("Input Operator Salah !!");
    }
}
