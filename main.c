#include <stdio.h>

int main() {
    double x, y , media;

    printf("Digite o primeiro número:");
    scanf("%lf", &x);
    printf("Digite o primeiro número:");
    scanf("%lf", &y);
    media = (x + y) / 2.0;
    printf("Media = %.1f\n", media);
    return 0;
}