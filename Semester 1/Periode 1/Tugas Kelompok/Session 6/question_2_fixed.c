#include <stdio.h>
#include <ctype.h>

int main()
{

    // Welcoming user
    printf("=================================================================\n");
    printf("           \033[1;35mAPLIKASI PENGHITUNG RATA-RATA NILAI MAHASISWA\033[0m\n");
    printf("=================================================================\n");
    printf("\nAplikasi ini diperuntukkan untuk menghitung nilai mahasiswa.\nTolong isi dengan teliti untuk menghindari kesalahan penilaian.\n");

    // Input the number of Mahasiswa
    int mahasiswa;
    printf("\nSilahkan masukkan jumlah mahasiswa minimal 10 orang untuk\nmenjalankan aplikasi.\n");
    do
    {
        printf("\nMasukkan jumlah mahasiswa: ");
        scanf("%d", &mahasiswa);
        if (mahasiswa < 10)
        {
            printf("\033[1;31mSilahkan masukkan minimal 10 orang.\033[0m\n");
        }

    } while (mahasiswa < 10);
    printf("\n=================================================================\n");

    // Input Mahasiswa Score
    int kuis, tugas, absensi, praktek, uas;
    int lulus = 1;
    printf("\nSilahkan masukkan nilai kuis, tugas, absensi, praktek, dan UAS\ntiap mahasiswa.\n");
    for (int i = 1; i <= mahasiswa; i++)
    {
        printf("\n=================================================================\n");

        printf("\nMahasiswa %d\n\n", i);
        printf("Masukkan nilai mahasiswa %d:\n", i);

        // Quiz Score
        do
        {
            printf("Nilai Kuis: ");
            scanf("%d", &kuis);
            if (kuis > 100 || kuis < 0)
            {
                printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
            }

        } while (kuis > 100 || kuis < 0);

        // Task Score
        do
        {
            printf("Nilai Tugas: ");
            scanf("%d", &tugas);
            if (tugas > 100 || tugas < 1)
            {
                printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
            }

        } while (tugas > 100 || tugas < 1);

        // Absent Score
        do
        {
            printf("Nilai Absensi: ");
            scanf("%d", &absensi);
            if (absensi > 100 || absensi < 1)
            {
                printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
            }

        } while (absensi > 100 || absensi < 1);

        // Practice Score
        do
        {
            printf("Nilai Praktek: ");
            scanf("%d", &praktek);
            if (praktek > 100 || praktek < 1)
            {
                printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
            }

        } while (praktek > 100 || praktek < 1);

        // UAS Score
        do
        {
            printf("Nilai UAS: ");
            scanf("%d", &uas);
            if (uas > 100 || uas < 1)
            {
                printf("\033[1;31mSilahkan masukkan nilai dalam rentang 1-100.\033[0m\n");
            }

        } while (uas > 100 || uas < 1);

        // Average Score Arithmatic
        double nilaiRataRata = (kuis + tugas + absensi + praktek + uas) / 5.0;

        // Determine grade
        char grade;
        if (nilaiRataRata <= 55)
        {
            grade = 'E';
            lulus = 0; // Set flag "Tidak Lulus" if anyone gets grade E
        }
        else if (nilaiRataRata <= 65)
        {
            grade = 'D';
            lulus = 0; // Set flag "Tidak Lulus" if anyone gets grade D
        }
        else if (nilaiRataRata <= 75)
        {
            grade = 'C';
        }
        else if (nilaiRataRata <= 85)
        {
            grade = 'B';
        }
        else
        {
            grade = 'A';
        }

        // Print the average results and Mahasiswa grade
        printf("\nBerikut merupakan hasil rata-rata, grade dan status mahasiswa:\n\n");
        printf(">> Rata-rata nilai mahasiswa: %.2f\n", nilaiRataRata);
        printf(">> Grade Mahasiswa %d: %c\n", i, grade);
        if (lulus == 0)
        {
            printf(">> Status mahasiswa: Tidak Lulus\n");
        }
        else
        {
            printf(">> Status mahasiswa: Lulus\n");
        }

        lulus = 1;
    }

    // Say goodbye to user
    printf("\n=================================================================\n");
    printf("\nAnda telah memberikan nilai pada %d mahasiswa. Semoga tidak ada\nkesalahan dalam memasukkan nilai.\n");
    printf("\n=================================================================\n");
    printf("\033[1;35m                        SAMPAI JUMPA LAGI!\033[0m\n");
    printf("=================================================================\n");

    return 0;
}