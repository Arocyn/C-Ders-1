#include <stdio.h>
#include <math.h>       //Gerekli k�t�phanemizi ekleriz

int main(){

double A = sqrt(16);    //Karek�k alma
printf("\n%lf", A);
double B pow(2,3);      //�s alma
printf("\n%lf", B);

int C = round(3.25);    //Yak�n oldu�u tarafa yuvarlama
printf("\n%d", C);
int D = ceil(3.01);     //Bir �st�ne Yuvarlama
printf("\n%d", D);
int E = floor(3.99);    //Bir alt�na yuvarlama
printf("\n%d", E);

double F fabs(-254);    //Mutlak de�er almak
printf("\nlf", F);

double G = log(5);      //Logoritma kullanmak
printf("\n%ls", G);

double H sin(45);       //Trigonometrikte sonu� radyan
printf("\n %lf", H);
double I = cos(45);
printf("\n %lf", I);
double J tan(45);
printf("\n %lf", J);

system("pause");

return 0;
}
