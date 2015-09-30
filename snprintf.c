#include <stdio.h>

#define MAX_BUF_LEN 100

int main() {
    char buffer[MAX_BUF_LEN];
    int len = 10;
    int n;

    n = snprintf(buffer, len, "%s", "hello");
    printf("%s\n", buffer);
    printf("%d\n", n);

    n = snprintf(buffer, 2, "%s world", "hello");
    printf("%s\n", buffer);
    printf("%d\n", n);

    n = snprintf(buffer, 2, "world %s", "hello");
    printf("%s\n", buffer);
    printf("%d\n", n);
    return 0;
}
