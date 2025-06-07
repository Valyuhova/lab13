#include <stdio.h>
#include <stdlib.h>

float sum(int n) 
{
    if (n == 1)
    {
        return (float)(2 * 1 - 1) / (2 * 1);
    }

    else
    {
        return (float)(2 * n - 1) / (2 * n) + sum(n - 1);
    }
}

int main() 
{
    system("chcp 65001");
    int N;
    printf("Введіть N: ");
    scanf("%d", &N);

    float result = sum(N);
    printf("Сума s = %.5f\n", result);

    return 0;
}
