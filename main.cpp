#include <iostream>
#include "FormatoHora.h"

int main() {
    FormatoHora h_1 (10, 37, 59);
    FormatoHora h_2 (3, 43, 21);

    FormatoHora horasTotales = h_1 + h_2;
    FormatoHora horasTotales2 = h_1  h_2;

    std::cout<< horasTotales.h << ":" << horasTotales.m <<":" << horasTotales.s <<"\n";
    std::cout<< horasTotales2.h << ":" << horasTotales2.m <<":" << horasTotales2.s <<"\n";
}