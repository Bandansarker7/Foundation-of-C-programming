    #include <stdio.h>

    int main() {
    int amount, notes_500, notes_100, notes_50, notes_10, notes_5, notes_1;


    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes_500 = amount / 500;
    amount = amount % 500;

    notes_100 = amount / 100;
    amount = amount % 100;

    notes_50 = amount / 50;
    amount = amount % 50;

    notes_10 = amount / 10;
    amount = amount % 10;

    notes_5 = amount / 5;
    amount = amount % 5;

    notes_1 = amount;

    printf("%d note(s) of 500\n", notes_500);
    printf("%d note(s) of 100\n", notes_100);
    printf("%d note(s) of 50\n", notes_50);
    printf("%d note(s) of 10\n", notes_10);
    printf("%d note(s) of 5\n", notes_5);
    printf("%d note(s) of 1\n", notes_1);

    return 0;
}

