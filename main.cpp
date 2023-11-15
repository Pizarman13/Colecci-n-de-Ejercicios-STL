//
// Created by Pizarman on 15/11/2023.
//
#include <iostream>
#include <cmath>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "cuadrado.cpp"

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
    std::cout << "Multilicacion: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::division(5, 3) << std::endl;
    std::cout << "Exponencial: " << Matematicas::exponente(5, 3) << std::endl;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(3) << std::endl;
    return 0;
}
