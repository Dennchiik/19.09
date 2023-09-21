#include <iostream>

template <typename T>
void solveLinearEquation(T a, T b) {
    if (a == 0) {
        if (b == 0) {
            std::cout << "Бесконечно много корней" << std::endl;
        }
        else {
            std::cout << "Нет корней" << std::endl;
        }
    }
    else {
        T x = -b / a;
        std::cout << "Корень линейного уравнения: x = " << x << std::endl;
    }
}

template <typename T>
void solveQuadraticEquation(T a, T b, T c) {
    if (a == 0) {
        solveLinearEquation(b, c);
    }
    else {
        T discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            std::cout << "Нет действительных корней" << std::endl;
        }
        else if (discriminant == 0) {
            T x = -b / (2 * a);
            std::cout << "Единственный корень квадратного уравнения: x = " << x << std::endl;
        }
        else {
            T sqrtDiscriminant = 1.0;
            for (int i = 0; i < 10; i++) {
                sqrtDiscriminant = 0.5 * (sqrtDiscriminant + discriminant / sqrtDiscriminant);
            }

            T x1 = (-b + sqrtDiscriminant) / (2 * a);
            T x2 = (-b - sqrtDiscriminant) / (2 * a);
            std::cout << "Корни квадратного уравнения: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
    }
}

int main() {
    double a = 1.0, b = -3.0, c = 2.0;

    solveQuadraticEquation(a, b, c);
    solveLinearEquation(b, c);

    return 0;
}
