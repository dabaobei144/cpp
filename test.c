#include <stdio.h>

#define SECONDS_PER_HOUR 3600;
#define SECONDS_PER_MINUTE 60;

void convert(int seconds, char *buf, int len)
{
    // compute
    int left = 0;
    int hours = seconds/SECONDS_PER_HOUR;
    left = seconds - hours*SECONDS_PER_HOUR;
    int minutes = left/SECONDS_PER_MINUTE;
    left -= minutes*SECONDS_PER_MINUTE;

    // add hours
    char *ptr = buf;
    int pos = 0;
    pos = snprintf(ptr, len, "%d", hours);
    if (pos == 1) {
        ptr[pos] = ptr[pos-1];
        ptr[pos-1] = '0';
        ++pos;
    }
    ptr += pos;

    // add ':'
    pos = snprintf(ptr, len, "%c", ':');
    ptr += pos;

    // add minutes
    pos = snprintf(ptr, len, "%d", minutes);
    if (pos == 1) {
        ptr[pos] = ptr[pos-1];
        ptr[pos-1] = '0';
        ++pos;
    }
    ptr += pos;

    // add ':'
    pos = snprintf(ptr, len, "%c", ':');
    ptr += pos;

    // add seconds
    pos = snprintf(ptr, len, "%d", left);
    if (pos == 1) {
        ptr[pos] = ptr[pos-1];
        ptr[pos-1] = '0';
        ++pos;
    }
    ptr += pos;

    ptr[pos] = '\0';
}

int main()
{
    char buffer[20];
    int seconds = 0;
    printf("please input invalid seconds\n");
    while(scanf("%d", &seconds) &&seconds != -1) {
      convert(seconds, buffer, 20);
      printf("%s\n", buffer);
    }
    return 0;
}
