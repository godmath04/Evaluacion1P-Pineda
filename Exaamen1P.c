/* Lea por pantalla un numero entero y diga el numero de digitos que tiene
y la suma de estos
*/
#include <stdio.h>
#include <stdbool.h>

// FUNCION PARA REALIZAR EL CONTEO DE LOS DIGITOS
int conteoDigitos(int num)
{
    int contador = 0;
    while (num != 0) // Establecemos que se ejectura mientras sea diferente de 0
    {
        num = num / 10;
        contador++;
    }
    return contador;
}

// FUNCION PARA REALIZAR LA SUMA DE LOS MISMOS
int sumaDigitos(int num)
{
    int suma = 0;
    int aux; // Variable auxiliar de la suma
    while (num != 0)
    {
        aux = num % 10; // Me entrada el residuo de cada expresion
        suma = suma + aux;
        num = num / 10;
    }
    // Disminuyo el numero en una unidad a la derecha
    return suma;
}

int main()
{
    int numero = 0;
    printf("Ingrese un numero para contar los digitos\n");
    scanf("%d", &numero);
    // PRIMERA PARTE DEL CONTEO
    printf("La cantidad de digitos de su numero %d es: %d.\n", numero, conteoDigitos(numero));
    printf("\n");
    // SEGUNDA PARTE - SUMA DE LOS DIGITOS
    printf("La suma de los digitos del numero %d es: %d.\n", numero, sumaDigitos(numero));
    return 0;
}
