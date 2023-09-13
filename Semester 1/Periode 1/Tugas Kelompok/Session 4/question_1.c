#include <stdio.h>

int main()
{
    int detik, menit, jam;
    printf("Input detik: ");
    scanf("%d", &detik);
    jam = detik / 3600;
    detik = detik % 3600;
    menit = detik / 60;
    detik = detik % 60;
    printf("%d jam %d menit %d detik", jam, menit, detik);
    return 0;
}
