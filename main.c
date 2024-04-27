#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escalares(){
    int opcion;
    printf("Escoge una de las siguientes opciones para empezar:\n");
    printf("1. Factorial de un numero.\n");
    printf("2. Fibonacci de n elementos.\n");
    printf("3. Tribonacci de n elementos.\n");
    printf("4. Calculo de raices de un polinomio de segundo grado.\n");
    printf("5. Conversion de grados a radianes.\n");
    printf("6. Conversion de radianes a grados.\n");
    printf("7. Conversion de coordenadas rectangulares a coordenadas cilindricas.\n");
    printf("8. Conversion de coordenadas rectangulares a coordenadas esfericas.\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        factorial();
        break;

    case 2:
        fibonacci();
        break;

    case 3:
        tribonacci();
        break;

    case 4:

        break;
        
    case 5:

        break;

    case 6:

        break;

    case 7:

        break;

    case 8:

        break;
    
    default:
        break;
    }
}

void vectores(){

}

void matrices(){

}

void factorial(){
    int n;
    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %d es %d\n", n, factorial);
}

void fibonacci(){
    int n;
    printf("Introduce un numero para calcular su serie de fibonacci: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void tribonacci(){
    int valor = 0;
    int a = 0;
    int b = 0;
    int c = 1;
    printf("Ingresa hasta que iteracion se calculara:");
    scanf("%i",&valor);
    printf("%i \n %i \n %i \n",a,b,c);
    for (int i = 0; i < valor; i++)
    {
         a=b;
         b=c;
         c=a+b;
         printf("%i\n",c);

    }
    
   

}
int main(){
    char Opcion;
    printf("Bienvenido a la calculadora maxima!!!\n");
    printf("Escoge una de las siguientes opciones para empezar:\n");
    printf("A. Operaciones con escalares.\n");
    printf("B. Operaciones con vectores.\n");
    printf("C. Operaciones con matrices.\n");

    scanf("%c", &Opcion);
    Opcion = toupper(Opcion);

    switch (Opcion)
    {
    case'A':
        escalares();
        break;
    
    case'B':
            vectores();
            break;

    case'C':
            matrices();
                break;


    default:
        break;
    }
}