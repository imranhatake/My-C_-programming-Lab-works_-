#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *start, *end;
    int flag = 0;

    printf("Enter string: ");
    gets(str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            flag = 1;
            break;
        }
        start++;
        end--;
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
