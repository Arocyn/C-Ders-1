#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=0;    /* Tan�mla+De�er Verme */

    int y;      /*Tan�mlama     */
    y=0;        /*De�er Verme   */

    /*
        Burada de�i�kenimizi tan�mlad�k
        Veri Tipleri kulla�m� >> veri t�r� isim; >> isim=de�er
        int     Tam say�lar i�in kullan�l�r.
        fload   Virg�ll� say�lar i�in kullan�l�r.
        char    Karakterler i�in kullan�l�r.

    */

    printf("Bir sayi giriniz.");
    scanf("%i", &x);            /* scanf ile kullan�c�dan girdi al�r�z. */
    printf("\n Girdiginiz sayi= %i \n", x);

    system("pause");
    return 0;
}
