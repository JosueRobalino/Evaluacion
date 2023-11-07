#include <stdio.h>
#include <math.h>

int main()
{
    float n,p,r,cuota,ii,aa,saldo;
    printf("Ingrese Monto del prestamo: \n");
    scanf("%f",&p);
    printf("Ingrese tasa de interes: \n");
    scanf("%f",&r);
    printf("Ingrese periodo del prestamo: \n");
    scanf("%f",&n);
    n=n/12;
    r=r/100;

    cuota=(p*r)/(1-pow(1+r,-n));
    int i;
    saldo=p;
    printf("TABLA DE AMORITZACION\n");
    printf("NUMERO\tCUOTA\t\tINTERES\t\tAMORTIZACION\tSALDO\n");
    for(i=1;i<=n;i++){
        ii=p*(1+r);
        ii=ii-p;
        aa=cuota-ii;
        saldo=saldo-aa;
        printf("%d\t%f\t%f\t%f\t%f\n",i,cuota,ii,aa,saldo);
    }
  return 0;
}







