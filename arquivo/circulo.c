#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#define pi 3.14159265


/* Cria um circulo com centro (x,y) e raio r */
Circulo* circ_cria(float x, float y, float r){
    Circulo* circulo = (Circulo*)malloc(sizeof(Circulo));
    circulo->raio = r;
    circulo->ponto_x = x;
    circulo->ponto_y = y;
    return circulo;
}    

/* Libera a memoria de um Circulo */
void circ_libera(Circulo *c){
   free(c); 
}

/* Calcula a area de um circulo */
float circ_area(Circulo *c){
    float area;
    area = pi * (c->raio * c->raio);
    return area;
}

/* Verifica se dois circulos tem o mesmo centro */
int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1->ponto_x == c2->ponto_x && c1->ponto_y == c2->ponto_y){
        return printf("São iguais.");
    }else{
        return printf("São diferentes.");
    }
}

/* Obtem o raio de um circulo */
float circ_raio(Circulo *c){
    return c->raio;
}