#include <iostream>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FiguraGeometrica *figuras[3];

    figuras[0] = new Triangulo();
    figuras[1] = new Quadrado();
    figuras[2] = new Circulo();

    cout << figuras[0]->calcularArea(3,4) << endl;
    cout << figuras[1]->calcularArea(2) << endl;
    cout << figuras[2]->calcularArea(5) << endl;

    return 0;
}
