#include <stdio.h>

#include <stdbool.h>

#include <ctype.h>

int main()

{

    // Welcoming user

    printf("=================================================================\n");

    printf(" \033[1;35mAPLIKASI PENGHITUNG RATA-RATA NILAI MAHASISWA\033[0m\n");

    printf("=================================================================\n");

    printf("\nAplikasi ini diperuntukkan untuk menghitung nilai mahasiswa.\nTolong isi dengan teliti untuk menghindari kesalahan penilaian.\n");

    // Input the number of Mahasiswa

    int mahasiswa;

    printf("\nSilahkan masukkan jumlah mahasiswa minimal 10 orang untuk\nmenjalankan aplikasi.\n");

    printf("\nMasukkan jumlah mahasiswa: ");

    scanf("%d", &mahasiswa);

    if (mahasiswa < 10)

    {

        printf("\033[1;31mSilahkan masukkan minimal 10 orang.\033[0m\n");

        return 0;
    }
    printf("\n=================================================================\n");

    // Input Mahasiswa Score

    char jenisNilai[5][20] = {"kuis", "tugas", "absensi", "praktek", "UAS"};

    double nilaiRataRata[mahasiswa];

    char grade[mahasiswa];

    double jumlahAverage = 0.00;

    bool status[mahasiswa];

    printf("\nSilahkan masukkan nilai kuis, tugas, absensi, praktek, dan UAS \ntiap mahasiswa.\n");

    for (int i = 1; i <= mahasiswa; i++)

    {
        printf("\n=================================================================\n");

        printf("\nMahasiswa %d\n\n", i);

        printf("Masukkan nilai mahasiswa %d:\n", i);

        // Quiz Score

        int nilai[5];

        for (int j = 0; j < 5; j++)

        {

            int tmpNilai;

            do

            {

                printf("Nilai %s: ", jenisNilai[j]);

                scanf("%d", &tmpNilai);

                if (tmpNilai > 100 || tmpNilai < 0)

                {

                    printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
                }

                else

                {

                    nilai[j] = tmpNilai;
                }

            } while (tmpNilai > 100 || tmpNilai < 0);

            // Task Score
        }

        // Average Score Arithmatic

        nilaiRataRata[i - 1] = (nilai[0] + nilai[1] + nilai[2] + nilai[3] + nilai[4]) / 5.0;

        // Determine grade

        jumlahAverage += nilaiRataRata[i - 1];

        if (nilaiRataRata[i - 1] <= 55)

        {

            grade[i - 1] = 'E';

            status[i - 1] = false; // Set flag "Tidak Lulus" if anyone gets grade E
        }

        else if (nilaiRataRata[i - 1] <= 65)

        {

            grade[i - 1] = 'D';

            status[i - 1] = false; // Set flag "Tidak Lulus" if anyone gets grade D
        }

        else if (nilaiRataRata[i - 1] <= 75)

        {

            grade[i - 1] = 'C';

            status[i - 1] = true;
        }

        else if (nilaiRataRata[i - 1] <= 85)

        {

            grade[i - 1] = 'B';

            status[i - 1] = true;
        }

        else

        {

            grade[i - 1] = 'A';

            status[i - 1] = true;
        }

        // Print the average results and Mahasiswa grade

        printf("\nBerikut merupakan hasil rata-rata, grade dan status mahasiswa:\n\n");

        printf(">> Rata-rata nilai mahasiswa: %.2f\n", nilaiRataRata[i - 1]);

        printf(">> Grade Mahasiswa %d: %c\n", i, grade[i - 1]);

        if (status[i - 1])

        {

            printf(">> Status mahasiswa: Lulus\n");
        }

        else

        {

            printf(">> Status mahasiswa: Tidak Lulus\n");
        }
    }

    printf("\n=================================================================\n");

    printf("AKUMULASI NILAI MAHASISWA \n \n");

    for (int i = 0; i < mahasiswa; i++)

    {

        printf("MAHASISWA %d \n", i + 1);

        printf(">> Rata-rata nilai mahasiswa: %.2f\n", nilaiRataRata[i]);

        printf(">> Grade Mahasiswa %d: %c\n", i, grade[i]);

        if (status[i])

        {

            printf(">> Status mahasiswa: Lulus\n");
        }

        else

        {

            printf(">> Status mahasiswa: Tidak Lulus\n");
        }

        printf("\n");
    }

    // Say goodbye to user

    printf("\n=================================================================\n");

    printf("\nAnda telah memberikan nilai pada %d mahasiswa. Semoga tidak ada\nkesalahan dalam memasukkan nilai.\n", mahasiswa);

    printf("Sehingga dapat diketahui bahwa rata-rata nilai dari %d mahasiswa adalah %.2lf.", mahasiswa, jumlahAverage / mahasiswa);

    printf("\n=================================================================\n");

    printf("\033[1;35m SAMPAI JUMPA LAGI!\033[0m\n");

    printf("=================================================================\n");
}
