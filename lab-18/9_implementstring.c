#include <stdio.h>

int myStrLen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void myStrCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
}

void myStrCat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++; 
    }
    while (*src != '\0') {
        *dest = *src; 
        dest++;
        src++;
    }
    *dest = '\0'; 
}

int myStrCmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2; 
        }
        str1++;
        str2++;
    }
    return *str1 - *str2; 
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Calculate String Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

void main() {
    char str1[100], str2[100], result[200];
    int choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: 
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                
                str1[myStrLen(str1) - 1] = '\0'; 
                printf("Length of the string: %d\n", myStrLen(str1));
                break;

            case 2: 
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[myStrLen(str1) - 1] = '\0'; 
                myStrCopy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3: 
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[myStrLen(str1) - 1] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[myStrLen(str2) - 1] = '\0'; 
                myStrCopy(result, str1); 
                myStrCat(result, str2); 
                printf("Concatenated string: %s\n", result);
                break;

            case 4: 
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[myStrLen(str1) - 1] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[myStrLen(str2) - 1] = '\0'; 
                int cmpResult = myStrCmp(str1, str2);
                if (cmpResult == 0) {
                    printf("The strings are equal.\n");
                } else if (cmpResult < 0) {
                    printf("The first string is less than the second string.\n");
                } else {
                    printf("The first string is greater than the second string.\n");
                }
                break;

            case 5: 
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

}
