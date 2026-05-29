#include <stdio.h>

#include "logik.h"

int main (void)
{
    Qubit my_qubit[2];

    // printing start points of simulation
    initialize_qubit(&my_qubit[1]);
    initialize_qubit(&my_qubit[2]);
    

    printf("Simulation start, showing start value!\n");
    printf("\n");
    printf("Alpha Zustand | Real: %.4f | Img: %.4f\n", my_qubit.real_alpha, my_qubit.img_alpha);
    printf("Beta Zustand | Real: %.4f | Img: %.4f\n", my_qubit.real_beta, my_qubit.img_beta);

    printf("\n");

    // Output value after simulation
    apply_hadamard(&my_qubit);

    printf("Alpha Ausgang | Real: %.4f | Img: %.4f\n", my_qubit.real_alpha, my_qubit.img_alpha);
    printf("Beta Ausgang | Real %.4f | Img: %.4f\n", my_qubit.real_beta, my_qubit.img_beta);
}