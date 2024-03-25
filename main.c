#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


int main(){
    
    //criando os circulos
    Circulo* c1 = circ_cria(0,0,5);
    Circulo* c2 = circ_cria(1,1,2);

    //calculando areas dos circulos
    printf("A areado circulo c1 e: %.2f", circ_area(&c1));
    printf("A areado circulo c1 e: %.2f", circ_area(&c2));
    
    //compara a concetricidade
    circ_concentricos(&c1, &c2);

    //obtem o raio dos circulos
    printf("Raio do circulo c1: %f", circ_raio(&c1));
    printf("Raio do circulo c2: %f", circ_raio(&c2));

    //libera a memoria alocada para os circulos
    circ_libera(&c1);
    circ_libera(&c2);
    
    return 0;
}