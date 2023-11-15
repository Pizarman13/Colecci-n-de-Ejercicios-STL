//
// Created by Pizarman on 15/11/2023.
//
#include <iostream>
#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    int exponente(int a, int b) {
        return pow(a, b);
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Multilicacion: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Exponencial: " << Matematicas::suma(5, 3) << std::endl;


    return 0;
}
