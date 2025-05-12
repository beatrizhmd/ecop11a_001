#define _USE_MATH_DEFINES // Para habilitar constantes matemáticas como M_PI
#include "volume.h"
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

float cubo(float aresta) {
    return aresta * aresta * aresta;
}

float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

float esfera(float raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

float cilindro(float raio, float altura) {
    return M_PI * pow(raio, 2) * altura;
}

float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0;
}
