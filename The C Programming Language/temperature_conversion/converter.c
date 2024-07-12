#include <stdio.h>

const int LOWER = 0;
const int UPPER = 0;
const int STEP = 0;

int main() {

    printf("Celsius\tFahrenheit\n");

    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
