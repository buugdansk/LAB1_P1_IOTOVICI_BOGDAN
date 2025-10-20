#pragma once

typedef struct TemperatureStruct
{
    double value;
    char scale;
} Temperature;

Temperature InitTemp(double value, char scale);
double CelsiusToFahrenheit(double celsius);
double FahrenheitToCelsius(double fahrenheit);
void PrintTemp(Temperature tem