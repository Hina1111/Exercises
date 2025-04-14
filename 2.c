#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum = 0;
    int count = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break; 
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("%.2f\n", average);
    }

    return EXIT_SUCCESS;
}
