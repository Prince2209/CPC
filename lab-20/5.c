#include <stdio.h>

int myStrncmp(const char *str1, const char *str2, size_t n) {
    while (n > 0 && *str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2); 
        }
        str1++; 
        str2++; 
        n--; 
    }
    if (n == 0) {
        return 0; 
    }
    return (*str1 - *str2); 
}

void myStrncpy(char *destination, const char *source, size_t n) {
    while (n > 0 && *source != '\0') {
        *destination = *source; 
        destination++; 
        source++; 
        n--; 
    }
    while (n > 0) { 
        *destination = '\0'; 
        destination++;
        n--;
    }
}

void myStrncat(char *destination, const char *source, size_t n) {
    while (*destination != '\0') { 
        destination++;
    }
    while (n > 0 && *source != '\0') {
        *destination = *source; 
        destination++; 
        source++; 
        n--; 
    }
    *destination = '\0'; 
}

void main() {
    char str1[100], str2[100], result[200];
    size_t n;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 

    printf("Enter number of characters (n): ");
    scanf("%zu", &n);

    int cmpResult = myStrncmp(str1, str2, n);
    if (cmpResult == 0) {
        printf("The first %zu characters of both strings are equal.\n", n);
    } else if (cmpResult < 0) {
        printf("The first %zu characters of str1 are less than those of str2.\n", n);
    } else {
        printf("The first %zu characters of str1 are greater than those of str2.\n", n);
    }

    myStrncpy(result, str1, n);
    printf("Result after copying: %s\n", result);

    myStrncat(result, str2, n);
    printf("Result after concatenating: %s\n", result);

}
