//
// Created by Catalina Domínguez on 2/26/18.
//

#ifndef PO_CDOMINGUEZ_A05_FORMATOHORA_H
#define PO_CDOMINGUEZ_A05_FORMATOHORA_H


#include <iostream>

class FormatoHora {
    friend FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2);
    friend FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2);

//  Atributos
public:
    int h;
    int m;
    int s;

//  Constructor
    FormatoHora (int h, int m, int s);

};


#endif //PO_CDOMINGUEZ_A05_FORMATOHORA_H
