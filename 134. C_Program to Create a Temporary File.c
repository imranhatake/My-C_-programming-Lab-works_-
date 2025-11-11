#include <stdio.h>

int main() {
    FILE *temp = tmpfile();   // creates temporary file

    if (temp == NULL) {
        printf("Error creating temporary file");
        return 1;
    }

    printf("Temporary file created successfully.");
    fclose(temp);
    return 0;
}
