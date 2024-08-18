#include <stdio.h>

// Function to convert a single digit to Roman numeral
void convertDigit(int digit, char one, char five, char ten) {
    switch (digit) {
        case 1: printf("%c", one); break;
        case 2: printf("%c%c", one, one); break;
        case 3: printf("%c%c%c", one, one, one); break;
        case 4: printf("%c%c", one, five); break;
        case 5: printf("%c", five); break;
        case 6: printf("%c%c", five, one); break;
        case 7: printf("%c%c%c", five, one, one); break;
        case 8: printf("%c%c%c%c", five, one, one, one); break;
        case 9: printf("%c%c", one, ten); break;
    }
}

// Function to convert a year to Roman numerals
void yearToRoman(int year) {
    if (year < 1 || year > 3999) {
        printf("Invalid input. Year must be between 1 and 3999.\n");
        return;
    }

    // Thousands place
    int thousands = year / 1000;
    for (int i = 0; i < thousands; i++) {
        printf("M");
    }

    // Hundreds place
    int hundreds = (year % 1000) / 100;
    convertDigit(hundreds, 'C', 'D', 'M');

    // Tens place
    int tens = (year % 100) / 10;
    convertDigit(tens, 'X', 'L', 'C');

    // Ones place
    int ones = year % 10;
    convertDigit(ones, 'I', 'V', 'X');

    printf("\n");
}

int main() {
    int year;
    printf("Enter a year (1-3999): ");
    scanf("%d", &year);
    yearToRoman(year);
    return 0;
}
