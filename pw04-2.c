#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t s, t;
    float result;

    if (scanf("%u %u", &s, &t) != 2) {
        return 1;
}
    result = (float)s / t;
    printf("Результат: %f\n", result);
    printf("sizeof(uint32_t) = %llu\n", (unsigned long long)sizeof(uint32_t));
    printf("sizeof(float) = %llu\n", (unsigned long long)sizeof(float));
    return 0;
}

/* Явное приведение нужно, иначе s / t выполнится как целочисленное
   деление и дробная часть будет потеряна. */
