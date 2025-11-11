#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#else
#include <sys/stat.h>
#include <unistd.h>
#endif

int main() {
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

#ifdef _WIN32
    // For Windows systems
    if (_chmod(filename, _S_IREAD) == 0) {
        printf("The file '%s' is now read-only.\n", filename);
    } else {
        perror("Error changing file permissions");
    }
#else
    // For Linux/Unix systems
    if (chmod(filename, 0444) == 0) {
        printf("The file '%s' is now read-only.\n", filename);
    } else {
        perror("Error changing file permissions");
    }
#endif

    return 0;
}
