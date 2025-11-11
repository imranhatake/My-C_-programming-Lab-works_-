#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm;

    t = time(NULL);
    tm = localtime(&t);

    int hour = tm->tm_hour;
    int min = tm->tm_min;
    int sec = tm->tm_sec;

    char *ampm = (hour >= 12) ? "PM" : "AM";

    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;

    printf("Current Time: %02d:%02d:%02d %s\n", hour, min, sec, ampm);

    return 0;
}
