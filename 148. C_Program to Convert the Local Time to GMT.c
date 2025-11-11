#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);

    printf("Local Time : %s", ctime(&t));
    printf("GMT Time   : %s", asctime(gmtime(&t)));

    return 0;
}
