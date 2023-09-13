#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    // Welcoming Customer
    printf("============================================================================\n");
    printf("                    \033[1;35mSELAMAT DATANG DI SIX INTERNET CAFE\033[0m\n");
    printf("============================================================================\n");

    // Give an information to customer
    printf("\nHalo buat kamu! Di bawah ini adalah daftar harga sewa billing di warnet kami.\n");
    printf("- Sewa per-jam akan dikenakan biaya sebesar Rp. 10000\n");
    printf("- Sewa melebihi dari 4 jam akan diberikan diskon sebesar 10%%\n");
    printf("- Sewa melebihi dari 6 jam akan diberikan diskon sebesar 15%%\n");
    printf("- Sewa melebihi dari 8 jam akan diberikan diskon sebesar 20%%\n");
    printf("- Sewa melebihi dari 10 jam akan diberikan diskon sebesar 25%%\n\n");
    printf("Jadi tunggu apalagi? \nAyo sewa billing di warnet kami untuk dapatkan diskon up to 25%%!\n\n");
    printf("============================================================================\n");

    // Ask Customer Billing Rent
    int jam = 0;
    do
    {
        printf("\nJadi, berapa jam kamu akan menyewa billing?\nInput jam: ");
        scanf("%d", &jam);
        if (jam < 0)
        {
            printf("\033[1;31mSilahkan input angka positif saja.\033[0m\n");
        }

    } while (jam < 0);

    printf("\n============================================================================\n");

    // Show Rent Hours and Decision Making
    char pilihan, pilih;
    int tambahJam = 0;

    do
    {
        printf("\nKamu sudah menyewa billing selama %d jam.\n", jam);
        printf("Apakah kamu ingin menambah jam sewa? (Y untuk iya / N untuk tidak)\n");

        do
        {
            printf("\nSilahkan input jawaban kamu: ");
            scanf(" %c", &pilihan);
            pilih = tolower(pilihan);

            if (pilih != 'y' && pilih != 'n')
            {
                printf("\033[1;31mSilahkan input Y / N saja.\033[0m\n");
            }

        } while (pilih != 'y' && pilih != 'n');

        if (pilih == 'y')
        {
            printf("Berapa lama kamu akan menambah jam sewa kamu?\n");
            printf("Input Jam: ");
            scanf("%d", &tambahJam);

            jam = jam + tambahJam;
        }

    } while (pilih == 'y');

    // Arithmatic and Show Details
    double diskon = 0.0;
    double harga = 0.0;
    double hargaDiskon = 0.0;
    double hargaTotal = 0.0;

    if (jam > 10)
    {
        diskon = 0.25;
    }
    else if (jam > 8)
    {
        diskon = 0.20;
    }
    else if (jam > 6)
    {
        diskon = 0.15;
    }
    else if (jam > 4)
    {
        diskon = 0.10;
    }

    harga = 10000 * jam;
    hargaDiskon = harga * diskon;
    hargaTotal = harga - hargaDiskon;

    printf("\n============================================================================\n");

    printf("\nBaiklah, terima kasih sudah menyewa billing di warnet kami.\n");
    printf("Berikut merupakan detail sewa kamu:\n");
    printf("Kamu telah menyewa billing selama %d jam.\n", jam);
    printf("Sehingga kamu harus membayar sebesar Rp. %.0lf.\n", hargaTotal);

    printf("\n============================================================================\n");
    printf("\033[1;35m      SEMOGA KAMU SENANG BERADA DI SIX INTERNET CAFE, SAMPAI JUMPA LAGI!\033[0m\n");
    printf("============================================================================\n");
}