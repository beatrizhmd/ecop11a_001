#include <stdio.h>
#include "volume.h"

int main(void) 
{
    printf ("Hello, Unifei!\n");

    float volume = esfera (3.0f);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}