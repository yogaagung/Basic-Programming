#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\t\t=============== My Pet ============\n");

    // Deklarasi variable
    int kap_makan = 50; // Maksnya 100
    int energi = 50; // Maksnya 100
    int porsi; // Maksnya 100

    char kodemenu;
    char namapet[100] = "Lucy"; // string

    while (1)
    {
        // membersihkan CMD
        system("cls");

    // Tampilan Menunya
    puts("Menu Aksi");
    puts("---- ----");
    puts("a> Berikan Makan");
    puts("b> Ajak Main");
    puts("c> Status");
    puts("d> Istirahat\n");

    // Proses Input
    printf("Hari ini mau apa dengan %s ?",namapet);
    scanf(" %c", &kodemenu);

    // Proses Switch
    switch (kodemenu)
    {
        case 'a' : puts("Beri Makan");
                   // Input
                   printf("Porsinya berapa? =");
                   scanf("%d", &porsi);

                   // Kondisi
                   if (kap_makan + porsi > 100)
                   {
                       printf("%s Kekenyangan !!\n", namapet);
                   }
                   else
                   {
                       kap_makan = kap_makan + porsi;
                       puts("NyamNyamNyam");
                   }
                   // End Case A
                   break;
        case 'b' : puts("Ajak Main");

                   kap_makan = kap_makan - 10;
                   energi = energi - 10;
                   if (kap_makan < 30)
                   {
                       printf("%s Pet Merasa Lapar\n", namapet);
                   }
                   else
                   {
                       kap_makan = kap_makan - 10;
                   }
                   if (energi < 20)
                   {
                       printf(" %s Pet Kelelahan", namapet);
                   }
                   else
                   {
                       energi = energi - 10;
                   }

                   // End Case B
                   break;
        case 'c' : puts("Status");
                   printf("Kapasitas Makan = %d, Energi = %d\n", kap_makan, energi);

                   // End Case C
                   break;
        case 'd' : puts("Istirahat");
                   // Kondisi
                   if (energi + 10 > 100)
                   {
                       printf("Energi Pet Sudah Penuh :)", namapet);
                   }
                   else
                   {
                       energi = energi + 10;
                   }
                   // End Case D
                   break;
        default  : puts("Kode Error!");  break;
    }

    puts("Main Lagi ?? [y/n]");
    if (getch() == 'n')
    {
        break;
    }
    }









    return 0;
}
