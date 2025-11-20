#include <stdio.h>

double CtoF(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double FtoC(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double C, F;

    scanf("%lf", &C);

    printf("%.2f F\n", CtoF(C));

    scanf("%lf", &F);

    printf("%.2f C\n", FtoC(F));

    return 0;
}