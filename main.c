#include <stdio.h>
#include "Temp.h"

int main()
{
    char target_scale;
    double input_value;
    double converted_value;

    printf("Convert TO: ");

    if (scanf(" %c", &target_scale) != 1) {
        printf("Error\n");
        return 1;
    }
    if (target_scale == 'C') {
        printf("temperature value in F: ");
        if (scanf("%lf", &input_value) != 1) {
            printf("Error\n");
            return 1;
        }
        converted_value = FahrenheitToCelsius(input_value);

    } else if (target_scale == 'F') {
        printf("temperature value in C: ");
        if (scanf("%lf", &input_value) != 1) {
            printf("Error\n");
            return 1;
        }
        converted_value = CelsiusToFahrenheit(input_value);

    }

    Temperature final_temp = InitTemp(converted_value, target_scale);

    printf("Result: ");
    PrintTemp(final_temp);

    return 0;
}