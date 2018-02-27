//
// Created by Catalina Domínguez on 2/26/18.
//

#include "FormatoHora.h"

FormatoHora::FormatoHora(int h, int m, int s) {
    this->h=h;
    this->m=m;
    this->s=s;
}

FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2) {
    if(h>=0 && h<=23){
        bool horacorrecta=true;
    }else if (h<0 || h>23){
        bool horacorrecta=false;
    }
    if(m>=0 && m<=59 && s>=0 && s <=59){
        bool minutosYSegvalidos= true;
    }else if (m<=0 || m>59 || s<=0 ||s>59 ) {
        bool minutosYSegValidos = false;
    }
    FormatoHora total (h1.h + h2.h, h1.m + h2.m, h1.s + h2.s);
    return total;
}

FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2) {
    if(h>=0 && h<=23){
        bool horacorrecta=true;
    }else if (h<0 || h>23){
        bool horacorrecta=false;
    }
    if(m>=0 && m<=59 && s>=0 && s <=59){
        bool minutosYSegvalidos= true;
    }else if (m<=0 || m>59 || s<=0 ||s>59 ) {
        bool minutosYSegValidos = false;
    }
    FormatoHora total (h1.h - h2.h, h1.m - h2.m, h1.s - h2.s);
    return total;
}

/*bool FormatoHora::validaHrs(int) {
    bool horaCorrecta = true;
    if(horas>=0 && horas<=23){
        bool horacorrecta=true;
    }else if (horas<0 || horas>23){
        bool horacorrecta=false;
    }
}

bool FormatoHora::validaMS(int) {
    bool minutosYSegValidos = true;

    if(minutos>=0 && minutos<=59 && segundos>=0 && segundos <=59){
        bool minutosYSegvalidos= true;
    }else if (minutos<=0 || minutos>59 || segundos<=0 ||segundos>59 ){
        bool minutosYSegValidos=false;
    }
}
int FormatoHora::getHoras() {
    return horas;
}
int FormatoHora::getMinutos() {
    return minutos;
}
int FormatoHora::getSegundos() {
    return segundos;
}
std::string FormatoHora::to_String() {
    std::string muestraHora;
    std::string muestraMinutos;
    std::string muestraSegundos;
    muestraHora= (std::to_string(getHoras()));
    muestraMinutos= (std::to_string(getMinutos()));
    muestraSegundos= (std::to_string(getSegundos()));
    return muestraHora+ "/"+muestraMinutos+"/"+muestraSegundos;
}
*/