#include <stdio.h>

int main() {
    char str[100];
    int length = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;  
            break;
        }
    }
    if (flag == 1) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}
