//
// Created by Pizarman on 15/11/2023.
//
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include "triangulo.cpp"
#include "criculoClase.cpp"
#include "circulo.cpp"
#include "ciencia.cpp"
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

    Geometria::circuloClase c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    std::cout << "Diametro: " << c.calcularDiametro() << std::endl;

    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;

    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);


    return 0;

}
