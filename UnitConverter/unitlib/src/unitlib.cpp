#include "unitlib.h"

// 温度
double celsiusToFahrenheit(double c) { return (c * 9.0 / 5.0) + 32; }
double fahrenheitToCelsius(double f) { return (f - 32) * 5.0 / 9.0; }

// 长度
double metersToFeet(double m) { return m * 3.28084; }
double feetToMeters(double f) { return f * 0.3048; }

// 重量
double poundsToKg(double p) { return p * 0.453592; }
double kgToPounds(double k) { return k * 2.20462; }