#include "Temp.h"
#include <stdio.h>

Temperature InitTemp(double value, char scale) {
    Temperature new_temp = {
        .scale = (scale == 'C' || scale == 'F') ? scale : 'E',
        .value = value
    };
    return new_temp;
}

double CelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

void PrintTemp(Temperature temp) {
    if (temp.scale == 'E') {
        printf("Error\n");
    } else {
        printf("Temperature: %.2f %c\n", temp.value, temp.scale);
    }
}