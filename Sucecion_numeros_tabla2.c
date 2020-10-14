#include <stdio.h>

main()
{
    int cont=0;
    int Valor;

printf("Igresa el valor de N: ");
scanf("%d",&Valor);

while(cont<=Valor+Valor+1)
    {

    printf("%d ",(3*Valor)+(cont*2));

    cont=cont+1;

}

return 0;
}
