/* Lea por pantalla un numero entero y diga el numero de digitos que tiene
y la suma de estos
*/
#include<stdio.h>
#include<stdbool.h>

// FUNCION PARA REALIZAR EL CONTEO DE LOS DIGITOS
int conteoDigitos(int num){
    int contador = 0;
    while (num != 0) // Establecemos que se ejectura mientras sea diferente de 0
    {
        num = num/10 ;
        contador++; 
    }
    return contador; 

}


int main()
{
    int numero = 0;
    printf("Ingrese un numero para contar los digitos\n");
    scanf("%d", &numero);
    printf("La cantidad de digitos de su numero %d es %d: ", numero, conteoDigitos(numero));
    return 0;
}

