#include <stdio.h>

#define KB 1024.0
#define MB (1024.0 * 1024.0)
#define GB (1024.0 * 1024.0 * 1024.0)

int main()
{
    double bytes;
    double kilobytes, megabytes, gigabytes;

    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    kilobytes = bytes / KB;
    megabytes = bytes / MB;
    gigabytes = bytes / GB;

    printf("\n%.0f bytes\n", bytes);
    printf("= %.4f KB\n", kilobytes);
    printf("= %.4f MB\n", megabytes);
    printf("= %.6f GB\n", gigabytes);

    return 0;
}