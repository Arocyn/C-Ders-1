#include <stdio.h>

int main(){

    /*
        Aritmetik Operat�rler
        +   Toplama
        -   ��karma
        *   �arpma
        /   B�lme
        %   Mod Alma
        ++  Artt�rma
        --  Azaltma
    */

    int a = 16;
    int b = 8;
    int c;

    c = a + b;
    printf("%d\n", c);

    c = a - b;
    printf("%d\n", c);

    c = a * b;
    printf("%d\n", c);

    c = a / b;
    printf("%d\n", c);

    c = a % b;
    printf("%d\n", c);

    c = ++a;
    printf("%d\n", c);

    c = ++b;
    printf("%d\n", c);

    c = --a;
    printf("%d\n", c);

    c = --b;
    printf("%d\n", c);

    system("pause");
}
