#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int A;
    long long int B;
    float C;
    char D;
    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf("%c", &D);
    D = getchar();
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c", D);
    return 0;
}
