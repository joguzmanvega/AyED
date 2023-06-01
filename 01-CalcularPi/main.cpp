#include <iostream>
#include <cmath>

int main() {
    double pi = 0.0;
    double epsilon = 1e-6;  // Diferencia mínima requerida para detener la iteración
    double sign = 1.0;
    int denominator = 1;

    while (std::abs(M_PI - pi) > epsilon) {
        pi += sign / denominator;
        sign *= -1;
        denominator += 2;
    }

    std::cout << "El valor de pi calculado es: " << pi << std::endl;

    return 0;
}