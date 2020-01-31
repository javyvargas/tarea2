#include <stdio.h>
#include <conio.h>
float funcion(float);
int main()
{
int it_max,it_min;
float xi,xu,error_aprox,error_min,test,xr,xr_ant;
printf("\nMETODO FALSA POSICION\n\n");
printf("Introduce el extremo del intervalo por la izquierda\n");
scanf("%f",&xi);
printf("Introduce el extremo del intervalo por la derecha\n");
scanf("%f",&xu);
printf("Introduce el numero de iteraciones maximas\n");
scanf("%f",&it_max);
printf("Introduce el error minimo del calculo\n");
scanf("%f",&error_min);
it_min=0;
xr=0;
if(funcion(xi)*funcion(xu)>0)
printf("No existe raiz dentro de ese intervalo\n");
else{
printf("\n Iteracion    Raiz     Error aprox\n");
do{
it_min++;
xr_ant=xr;
xr=((xi)-(funcion(xi))*(xu-xi)/(funcion(xu)-funcion(xi)));
error_aprox=fabs((xr-xr_ant)/xr)*100;
test=funcion(xi)*funcion(xr);
if(test<0)
xu=xr;
else if(test >0)
xi=xr;
else
error_aprox=0;
printf("\n%i    %f    %f",it_min,xr,error_aprox);
} while(error_aprox>error_min && it_min<it_max);
}
    return 0;
}
float funcion(float x)
{
    return x*x*x+4*x*x-10;
}
