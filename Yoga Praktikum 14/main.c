#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Step 1. Deklarasi Variable
    int ukuran; // Variable utk Ukuran Array
    // Proses Inputan
    printf("Tentukan ukuran array = "); scanf("%d", &ukuran);
    int array_angka [ukuran];

            // Step 2. Proses Input Data Array

            int x; // Variable utk Index Array


            for(x = 0 ; x < ukuran ; x +=1 )
            {
                // Input Perelemen Array
                printf("Input data = "); scanf("%d", &array_angka[x]);
            }

    // Step 3. Proses Output
    for(x = 0 ; x < ukuran ; x +=1)
    {
        printf("[%d] - ", array_angka[x]);
    }

            int max; // Untuk Menampung Nilai Max
            max = array_angka [0]; // Inisialisasi Nilai Max di Index Awal
            // Step 4. Proses Cari Nilai Max
            for (x = 0 ; x < ukuran ; x +=1 )
            {
                if (array_angka[x] >= max)
                {
                    // Nilai Maxnya Berubah Menjadi Isi Array ke Index
                    max = array_angka[x];
                }
            }
            printf("\nNilai Maksimalnya = %d\n", max);

    return 0;
}

