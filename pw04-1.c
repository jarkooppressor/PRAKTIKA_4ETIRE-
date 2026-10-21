#include <stdio.h>

#define COEF 3

    int main(void) {
    int value;
/* значение в чайных ложках */
/* Цикл while: читаем, пока введено положительное число */
    while (scanf("%d", &value) == 1 && value > 0) {
    int berlin = value / COEF;  
/* целочисленное деление */
    int aboba = value % COEF;   
/* остаток */
    printf("%d ч.л. = %d ст.л. %d ч.л.\n", value, berlin, aboba);
}
    return 0;
}

 /* При целочисленном делении дробная часть отбрасывается,
  * потому что оба операнда имеют целый тип. Результат тоже
  * целый, поэтому 7 / 3 даёт 2, а не 2.333...*/