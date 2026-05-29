#ifndef simulation_H
#define simulation_H

typedef struct
{
    float real_alpha;
    float img_alpha;
    float real_beta;
    float img_beta;
} Qubit;

void initialize_qubit(Qubit *q);
void apply_hadamard(Qubit *q);
int measure_qubit(Qubit *q);

#endif