#include <stdio.h>

int main(){

    /*
        Aritmetik Operatörler
        +   Toplama
        -   Çıkarma
        *   Çarpma
        /   Bölme
        %   Mod Alma
        ++  Arttırma
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
  
return 0;
}
