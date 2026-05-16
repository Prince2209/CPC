#include <stdio.h>
#include <string.h>

void convertToWords(int num);
void printUnit(int num);
void printTens(int num);
void printHundreds(int num);
void printThousands(int num);

const char *units[] = {
    "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

const char *teens[] = {
    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
    "Sixteen", "Seventeen", "Eighteen", "Nineteen"
};

const char *tens[] = {
    "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

void convertToWords(int num) {
    if (num == 0) {
        printf("Zero\n");
        return;
    }
    
    if (num >= 1000) {
        printThousands(num);
        num %= 1000; 
    }
    
    if (num >= 100) {
        printHundreds(num);
        num %= 100; 
    }
    
    if (num >= 20) {
        printTens(num);
        num %= 10; 
    } else if (num >= 10) {
        printf("%s ", teens[num - 10]);
        return;
    }
    
    if (num > 0) {
        printUnit(num);
    }
    printf("\n");
}

void printUnit(int num) {
    printf("%s ", units[num]);
}

void printTens(int num) {
    printf("%s ", tens[num / 10]);
}

void printHundreds(int num) {
    printf("%s Hundred ", units[num / 100]);
}

void printThousands(int num) {
    printf("%s Thousand ", units[num / 1000]);
}

void main() {
    int amount;

    printf("Enter an amount (integer): ");
    scanf("%d", &amount);
    
    printf("Amount in words: ");
    convertToWords(amount);

}
