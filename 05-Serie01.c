#include <stdio.h>

main()
{
    int cont=0;
    int Valor;

printf("Valor de N: ");
scanf("%d",&Valor);

while(cont<=Valor){

    printf("%d ",(Valor*Valor)-(2*cont));

    cont=cont+1;

}

return 0;
}
