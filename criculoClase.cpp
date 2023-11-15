//
// Created by Pizarman on 15/11/2023.
//
namespace Geometria {
    class circuloClase {
    private:
        double radio;
    public:
        circuloClase(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
        double calcularDiametro() {
            return 2 * radio;
        }
    };
}