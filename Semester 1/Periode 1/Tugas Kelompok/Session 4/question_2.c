#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat1[100], kalimat2[100], kalimat3[100];
    char gabungan[300], akhir[300];
    printf("Kalimat 1 = ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    kalimat1[strcspn(kalimat1, "\n")] = '\0'; // Menghapus karakter newline

    printf("Kalimat 2 = ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    kalimat2[strcspn(kalimat2, "\n")] = '\0'; // Menghapus karakter newline

    printf("Kalimat 3 = ");
    fgets(kalimat3, sizeof(kalimat3), stdin);
    kalimat3[strcspn(kalimat3, "\n")] = '\0'; // Menghapus karakter newline

    strcat(gabungan, kalimat1);
    strcat(gabungan, " ");
    strcat(gabungan, kalimat2);
    strcat(gabungan, " ");
    strcat(gabungan, kalimat3);
    printf("Gabungan 3 buah inputan kalimat = %s\n", gabungan);

    for (int i = 0; i < strlen(gabungan); i++)
    {
        akhir[i] = gabungan[strlen(gabungan) - (i + 1)];
    }
    akhir[strlen(gabungan)] = '\0'; // Menambahkan null-terminator pada akhir
    printf("Hasil membalik kalimat gabungan = %s\n", akhir);

    printf("Jumlah Huruf kalimat pertama = %d\n", (int)strlen(kalimat1));
    printf("Jumlah Huruf kalimat kedua = %d\n", (int)strlen(kalimat2));
    printf("Jumlah Huruf kalimat ketiga = %d\n", (int)strlen(kalimat3));

    return 0;
}
