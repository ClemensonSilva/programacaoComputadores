#include <cmath>


float normaVetor(float Ox, float Oy){
    return sqrt(pow(Ox,2) + pow(Oy,2));
}

float radPgraus(float Ox, float Oy){
    float pi = 3.14;
    float angulo = atan2(Oy,Ox); // radianos

    return angulo*(180/pi);
}
