// uloha5-2.c -- Peter Furda, 16.10.2018 13:23
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nacitaj(double *x, double *y){//aby sa zapametalo pouzijem pointer
   // printf("Nacitaj dve cisla \n");
    scanf("%lf %lf", x, y); //ked ich nacitavam nemusim tam nic davat
    printf("%g %g\n", &x, &y);
}
double obvod(double x, double y){
    return (2*x + 2*y);
}
double obsah(double x, double y){
    return (x*y);
}
int main()
{
    double x, y; //nacitam ako premenne
    char a;


    nacitaj(&x,&y); //tak im dam adresu
    //printf("Zadaj operaciu co maju vykonavat:");
    scanf("%s", &a);

    if(a == 's'){ obsah(x,y);
                    printf("%g", obsah);}

    else if(a == 'o'){ obvod(x,y);
                    printf("%g", obvod);}

    return 0;
}
