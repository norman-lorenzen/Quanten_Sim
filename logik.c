#include <stdio.h>
#include <math.h>

#include "logik.h"


// startpoint of simulation
void initialize_qubit(Qubit *q)
{
    q->real_alpha = 1.0f;
    q->img_alpha = 0.0f;
    q->real_beta = 0.0f;
    q->img_beta = 0.0f;
}

void apply_hadamard(Qubit *q)
{
    float factor = 1.0f / sqrtf(2.0f);

    // save the alpha start value
    float old_real_alpha = q->real_alpha;
    float old_img_alpha = q->img_alpha;

    // save the beta start value
    float old_real_beta = q->real_beta;
    float old_img_beta = q->img_beta;

    q->real_alpha = factor * (old_real_alpha + old_real_beta);
    q->img_alpha = factor * (old_img_alpha + old_img_beta);

    q->real_beta = factor * (old_real_alpha - old_real_beta);
    q->img_beta = factor * (old_img_alpha - old_img_beta);
}