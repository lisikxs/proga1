#include <stdio.h>

int main() 
{ 
    int x; 
    printf("введите в  10 системе счисления: "); 
    scanf("%d", &x); 
 
    int y = x; 
    printf("выведите в 16 системе счисления: %x \n", y); 
 
    int bitwise_right1 = x << 4; 
    printf("введенное число в 16 системе счисления сдвинутое на 4 бита влево: %x \n", bitwise_right1); 
 
    int not_x = ~x;
    printf("битовая операция отрицания: %x \n", not_x); 
 
    int z; 
    printf("введите число в 16 системе счисления: "); 
    scanf("%x", &z); 
 
    int bitwise_and = (z & y); 
    printf("результат: %d", bitwise_and); 
 
    return 0; 
}
