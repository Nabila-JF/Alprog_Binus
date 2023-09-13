#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define JUMLAH_BULAN 12
#define CHAR_BULAN_MAKS 10

// Fungsi untuk menghitung jumlah karakter vokal dalam string
int hitungVokal(const char *str)
{
    int hitung = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            hitung++;
        }
    }
    return hitung;
}

// Fungsi untuk menghitung jumlah karakter non-vokal dalam string
int hitungNonVokal(const char *str)
{
    int hitung = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (isalpha(c) && c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o')
        {
            hitung++;
        }
    }
    return hitung;
}

int main()
{
    char input;

    printf("Masukkan huruf (A-Z): ");
    scanf(" %c", &input);

    char bulan[JUMLAH_BULAN][CHAR_BULAN_MAKS] = {
        "januari", "februari", "maret", "april", "mei", "juni",
        "juli", "agustus", "september", "oktober", "november", "desember"};

    char cekBulan[JUMLAH_BULAN][CHAR_BULAN_MAKS];
    int cekHitung = 0;

    for (int i = 0; i < JUMLAH_BULAN; i++)
    {
        if (tolower(bulan[i][0]) == tolower(input))
        {
            strcpy(cekBulan[cekHitung], bulan[i]);
            cekHitung++;
        }
    }

    if (cekHitung > 0)
    {
        printf("Bulan dengan awalan '%c':\n", input);
        for (int i = 0; i < cekHitung; i++)
        {
            printf("%d. %s\n", i + 1, cekBulan[i]);
        }

        int pilihan;
        if (cekHitung > 1)
        {
            printf("Pilih bulan (1-%d): ", cekHitung);
            scanf("%d", &pilihan);
            pilihan--;
        }
        else
        {
            pilihan = 0;
        }

        int jumlahVokal = hitungVokal(cekBulan[pilihan]);
        int jumlahNonVokal = hitungNonVokal(cekBulan[pilihan]);

        printf("Jumlah karakter vokal: %d\n", jumlahVokal);
        printf("Jumlah karakter non-vokal: %d\n", jumlahNonVokal);
    }
    else
    {
        printf("Tidak ada bulan dengan awalan '%c'\n", input);
    }

    return 0;
}
