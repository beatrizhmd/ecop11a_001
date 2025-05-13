#include <math.h> // Para a constante M_PI e funções matemáticas
#include "volume.h"

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
