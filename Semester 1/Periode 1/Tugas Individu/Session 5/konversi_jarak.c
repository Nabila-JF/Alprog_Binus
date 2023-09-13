#include <stdio.h>
int main()
{
    double km; // inisiasi variabel jarak dalam 'KM'
    printf("Silahkan masukkan jarak dalam kilometer (jika angka desimal, gunakan titik ' . ' sebagai pengganti koma, contoh: 5.6 ): \n");
    scanf("%lf", &km); // Menggunakan format specifier untuk membaca tipe data double ( %lf ) dan memasukkan data dalam variabel ' km '

    double m = km * 1000; // Konversi jarak kilometer ke meter
    double cm = m * 100;  // Konversi jarak meter ke sentimeter

    // Perulangan ini penting untuk menghindari masalah read
    while (getchar() != '\n') // Fungsi getchar() digunakan untuk menangkap inputan dari user
        ;                     // Membersihkan buffer sampai karakter newline

    printf("Mohon tekan 'Enter' untuk melihat hasil konversi:\n");
    while (getchar() == '\n')
    {
        printf("%.2lf km = %.2lf m = %.2lf cm\n", km, m, cm); // Menggunakan format specifier untuk membaca tipe data double
                                                              // dengan mengambil 2 angka di belakang koma ( %.2lf )
        printf("Silahkan tekan 'Enter' kembali untuk menampilkan ulang \n");
        printf("Isi karakter apapun lalu 'Enter' atau Ctrl+C untuk keluar.\n");
    }
    return 0;
}
