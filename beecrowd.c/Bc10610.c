#include <stdio.h>

int main()
{
    int start_day, end_day, start_hour, end_hour, start_minute, end_minute, start_second, end_second;
    int duration_day, duration_hour, duration_minute, duration_second;

    scanf("%*s %d", &start_day);
    scanf("%d : %d : %d", &start_hour, &start_minute, &start_second);
    scanf("%*s %d", &end_day);
    scanf("%d : %d : %d", &end_hour, &end_minute, &end_second);

    duration_day = end_day - start_day;
    duration_hour = end_hour - start_hour;
    duration_minute = end_minute - start_minute;
    duration_second = end_second - start_second;

    if (duration_second < 0) {
        duration_second += 60;
        duration_minute -= 1;
    }

    if (duration_minute < 0) {
        duration_minute += 60;
        duration_hour -= 1;
    }

    if (duration_hour < 0) {
        duration_hour += 24;
        duration_day -= 1;
    }

    printf("%d dia(s)\n", duration_day);
    printf("%d hora(s)\n", duration_hour);
    printf("%d minuto(s)\n", duration_minute);
    printf("%d segundo(s)\n", duration_second);

    return 0;
}
