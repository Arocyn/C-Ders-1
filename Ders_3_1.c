#include <stdio.h>

int main(){

    int a = 11;
    /*
        �kili bir �ekilde g�sterdi�im i�lemlerde hi� bir fark yok
        Sadece kullan�m kolayl��� ve g�m�l� sistemler i�in 2.sini
        tercih etmenizin iyi olaca�� kan�s�nday�m.
    */

    a = a + 2;
    printf("%d\n", a);
    a += 2;
    printf("%d\n", a);
    a = a - 3;
    printf("%d\n", a);
    a -= 3;
    printf("%d\n", a);
    a = a * 4;
    printf("%d\n", a);
    a *= 4;
    printf("%d\n", a);
    a = a / 11;
    printf("%d\n", a);
    a /= 11;
    printf("%d\n", a);
    a = a % 5;
    printf("%d\n", a);
    a %= 5;
    printf("%d\n", a);
}
