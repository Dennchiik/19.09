#include <iostream>

int average(const int arr[], size_t size) {
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / static_cast<int>(size);
}

double average(const double arr[], size_t size) {
    double sum = 0.0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / static_cast<double>(size);
}

int main() {
    int intArray[] = { 1, 2, 3, 4, 5 };
    double doubleArray[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

    int intAvg = average(intArray, sizeof(intArray) / sizeof(intArray[0]));
    double doubleAvg = average(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]));

    std::cout << "Среднее арифметическое для массива intArray: " << intAvg << std::endl;
    std::cout << "Среднее арифметическое для массива doubleArray: " << doubleAvg << std::endl;

    return 0;
}
