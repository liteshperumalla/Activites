#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTime();
void printTime(struct Time time);
struct Time calculateDifference(struct Time start, struct Time end);

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    startTime = getTime();

    printf("Enter the end time:\n");
    endTime = getTime();

    difference = calculateDifference(startTime, endTime);

    printf("Difference: ");
    printTime(difference);

    return 0;
}

struct Time getTime() {
    struct Time time;

    printf("Hours: ");
    scanf("%d", &time.hours);
    printf("Minutes: ");
    scanf("%d", &time.minutes);
    printf("Seconds: ");
    scanf("%d", &time.seconds);

    return time;
}

void printTime(struct Time time) {
    printf("%02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}

struct Time calculateDifference(struct Time start, struct Time end) {
    struct Time difference;

    int totalSecondsStart = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int totalSecondsEnd = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int totalSecondsDifference = totalSecondsEnd - totalSecondsStart;

    difference.hours = totalSecondsDifference / 3600;
    totalSecondsDifference %= 3600;
    difference.minutes = totalSecondsDifference / 60;
    difference.seconds = totalSecondsDifference % 60;

    return difference;
}
