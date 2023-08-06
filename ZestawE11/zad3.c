#include <stdio.h>

enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

void printDayOfWeek(enum DayOfWeek day) {
    switch (day) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
        default:
            printf("Unknown day\n");
            break;
    }
}

int main()
{
    enum DayOfWeek day = MONDAY;
    printDayOfWeek(day);
    return 0;
}