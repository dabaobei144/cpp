#include <stdio.h>

#define MAX_BUF_LEN 100

/* snprintf(buf, n, ...)
 * 最多拷贝n-1个字节到目标缓冲区
 * 返回值为期望拷贝到缓冲区的大小
 */
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
