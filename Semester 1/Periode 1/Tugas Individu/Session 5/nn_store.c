#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char choice, result;
    double price = 0.0;
    double discount = 0.0;
    int transaction = 0;

    do
    {
        // Welcoming User
        printf("==================================================================\n");
        printf("\033[1;36m                         WELCOME TO N&N STORE\033[0m\n");
        printf("==================================================================\n");

        // Define transaction
        transaction++;

        // Input Price
        printf("Please input the total purchase price: Rp. ");
        scanf("%lf", &price);
        printf("==================================================================\n");

        // Discount Selection Based on Price
        if (price > 1000000)
        {
            discount += 0.3;
        }
        else if (price > 550000)
        {
            discount += 0.2;
        }
        else if (price > 200000)
        {
            discount += 0.1;
        }

        // Added discount when making 4 transactions
        if (transaction == 4 && price > 200000)
        {
            discount += 0.2;
        }

        // Discount Math
        double discountPrice = price * discount;
        double endPrice = price - discountPrice;

        // Show Up Data Details
        if (price > 200000)
        {
            printf("Congratulations! You get a discount of %.0lf%%\n", discount * 100);
            printf("The discount you get is Rp. %.0lf\n", discountPrice);
        }

        printf("So you have to pay Rp. %.0lf\n", endPrice);

        printf("You have made %d transaction.", transaction);

        // Goodbye To User
        printf("\n==================================================================\n");
        printf("Hope you enjoy shopping at our store! Come back soon!\n");
        printf("==================================================================\n");

        // User Choices
        printf("Oh, hello there! Do you want to make another transaction?\n");
        do
        {

            printf("(Y for yes and N for no)\nYour choice: ");
            scanf(" %c", &choice);
            result = tolower(choice);

            if (result != 'y' && result != 'n')
            {
                printf("\033[1;31mPlease submit only Y / N.\033[0m\n");
            }

        } while (result != 'y' && result != 'n');

        if (result == 'n')
        {
            printf("==================================================================\n");
            printf("\033[1;36mThanks for shopping at our store!\033[0m\n");
            printf("==================================================================\n");
        }

        // Reset
        discount = 0.0;

    } while (result == 'y');

    return 0;
}