#include "triangulo.h"

float hipotenusa(float a, float b){
    float hip;
    hip = sqrt(pow(a,2) + pow(b,2));
    return hip;
}