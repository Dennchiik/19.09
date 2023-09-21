#include <iostream>

double roundWithPrecision(double number, int precision) {
    double factor = 1.0;
    for (int i = 0; i < precision; i++) {
        factor *= 10.0;
    }

    double roundedNumber = ((long long)(number * factor + 0.5)) / factor;
    return roundedNumber;
}

int main() {
    double value;
    int precision;

    std::cout << "Введите вещественное число: ";
    std::cin >> value;
    std::cout << "Введите количество знаков после десятичной точки: ";
    std::cin >> precision;

    double roundedValue = roundWithPrecision(value, precision);

    std::cout << "Округленное число: " << roundedValue << std::endl;

    return 0;
}
