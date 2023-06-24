#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeElapsedSeconds(const char *timeString) {
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char timeString[9];

    printf("Enter the time in hh:mm:ss format: ");
    scanf("%8s", timeString);

    int elapsedSeconds = computeElapsedSeconds(timeString);

    printf("Number of seconds elapsed: %d\n", elapsedSeconds);

    return 0;
}