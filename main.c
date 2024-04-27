#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int producto_cruz()
{
    int num_elementos,salir;
    float producto_cruz;
    printf("\nPRODUCTO CRUZ ENTRE DOS VECTORES DE 2 o 3 ELEMENTOS.\n");
    printf("Cuantos elementos tendran los vectores?: ");
    scanf("%i",&num_elementos);
    while(num_elementos>3 || num_elementos<2){
        printf("Error: Las dimensiones de los vectores no cumplen con las caracteristicas del producto cruz\n"
               "Cuantos elementos tendran los vectores?: ");
        scanf("%i",&num_elementos);
    }
    float vector_1[num_elementos];
    float vector_2[num_elementos];
    printf("\nEscribe los elementos de tu vector 1:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("\nEscribe los elementos de tu vector 2:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 2 posicion %i:",i);
        scanf("%f",&vector_2[i]);
    }
    if(num_elementos==3){
        float i=0,j=0,k=0;
        i+=(vector_1[1]*vector_2[2])-(vector_1[2]*vector_2[1]);
        j+=(vector_1[2]*vector_2[0])-(vector_1[0]*vector_2[2]);
        k+=(vector_1[0]*vector_2[1])-(vector_1[1]*vector_2[0]);
        printf("\nEl producto cruz entre el vector 1 = [");
        for(int i=0;i<num_elementos;i++){
            printf("%.2f",vector_1[i]);
            if (i==num_elementos-1)
                break;
            printf(", ");
        }
        printf("], y el vector 2 = [");
        for(int i=0;i<num_elementos;i++){
            printf("%.2f",vector_2[i]);
            if (i==num_elementos-1)
                break;
            printf(", ");
        }
        printf("] = [%.2f i, %.2f j, %.2f k]",i,j,k);
    }
    else{
        float i_j=0;
        i_j+=(vector_1[0]*vector_2[1])-(vector_1[1]*vector_2[0]);

        printf("\nEl producto cruz entre el vector 1 = [");
        for(int i=0;i<num_elementos;i++){
            printf("%.2f",vector_1[i]);
            if (i==num_elementos-1)
                break;
            printf(", ");
        }
        printf("], y el vector 2 = [");
        for(int i=0;i<num_elementos;i++){
            printf("%.2f",vector_2[i]);
            if (i==num_elementos-1)
                break;
            printf(", ");
        }
        printf("] = %.2f k\n",i_j);
    }
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int producto_punto()
{
    int num_elementos,salir;
    float producto_punto;
    printf("\nPRODUCTO PUNTO ENTRE DOS VECTORES DE N ELEMENTOS.\n");
    printf("Cuantos elementos tendran los vectores?: ");
    scanf("%i",&num_elementos);
    float vector_1[num_elementos];
    float vector_2[num_elementos];
    printf("\nEscribe los elementos de tu vector 1:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("\nEscribe los elementos de tu vector 2:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 2 posicion %i:",i);
        scanf("%f",&vector_2[i]);
    }
    printf("\nEl producto punto entre el vector 1 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("], y el vector 2 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("] es = ");
    for (int i =0;i<num_elementos;i++){
        producto_punto+=vector_1[i]*vector_2[i];
    }
    printf("%.2f\n",producto_punto);
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int angulo_dos_vectores()
{
    int num_elementos,salir;
    float producto_punto=0,magnitud1=0,magnitud2=0;
    printf("\nANGULO ENTRE DOS VECTORES DE N ELEMENTOS.\n");
    printf("Cuantos elementos tendran los vectores?: ");
    scanf("%i",&num_elementos);
    float vector_1[num_elementos];
    float vector_2[num_elementos];
    printf("\nEscribe los elementos de tu vector 1:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("\nEscribe los elementos de tu vector 2:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 2 posicion %i:",i);
        scanf("%f",&vector_2[i]);
    }
    printf("\nEl angulo entre el vector 1 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("], y el vector 2 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("] es = ");
    for (int i =0;i<num_elementos;i++){
        producto_punto+=vector_1[i]*vector_2[i];
    }
    for (int i =0; i < num_elementos; i++){
        magnitud1+= pow(vector_1[i],2);
        magnitud2+= pow(vector_2[i],2);
    }
    printf("%.4f grados\n", (acos((producto_punto)/(sqrt(magnitud1)* sqrt(magnitud2))))*(180/3.14159265));


    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int escalar_por_vector()
{
    int num_elementos,salir;
    float por;
    printf("\nESCALAR POR UN VECTOR DE N ELEMENTOS.\n");
    printf("Cuantos elementos tendra el vector que multiplicaras?: ");
    scanf("%i",&num_elementos);
    float vector_1[num_elementos];
    printf("\nEscribe los elementos de tu vector:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("El vector sera multiplicado por: ");
    scanf("%.2f",&por);

    printf("\nEl vector = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("] ");

    printf("sera multiplicado por: %f\n",por);
    printf("Y el vector de resultado es: [");
    for(int i =0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]*por);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("] \n");
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int resta_dos_vectores(){
    int num_elementos,salir;
    printf("\nRESTA DE DOS VECTORES DE N ELEMENTOS.\n");
    printf("Cuantos elementos tendran los vectores que restaras?: ");
    scanf("%i",&num_elementos);
    float vector_1[num_elementos];
    float vector_2[num_elementos];
    printf("\nOJO!, Al vector 1 se le restara el vector 2.\n");
    printf("\nEscribe los elementos de tu vector 1:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("\nEscribe los elementos de tu vector 2:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 2 posicion %i:",i);
        scanf("%f",&vector_2[i]);
    }
    printf("\nVector 1 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");
    printf("\nVector 2 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");

    printf("\nLa diferencia de los vectores es: [");
    for (int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]-vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");

    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;

}

int suma_dos_vectores(){
    int num_elementos,salir;
    printf("\nSUMA DE DOS VECTORES DE N ELEMENTOS.\n");
    printf("Cuantos elementos tendran los vectores que sumaras?: ");
    scanf("%i",&num_elementos);
    float vector_1[num_elementos];
    float vector_2[num_elementos];
    printf("\nEscribe los elementos de tu vector 1:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 1 posicion %i:",i);
        scanf("%f",&vector_1[i]);
    }
    printf("\nEscribe los elementos de tu vector 2:\n");
    for(int i=0;i<num_elementos;i++){
        printf("Vector 2 posicion %i:",i);
        scanf("%f",&vector_2[i]);
    }
    printf("\nVector 1 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");
    printf("\nVector 2 = [");
    for(int i=0;i<num_elementos;i++){
        printf("%.2f",vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");

    printf("\nLa suma de los vectores es: [");
    for (int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]+vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");

    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;


}

int distancia_entre_dos_puntos_espacio(void)
{
    float x1,x2,y1,y2,z1,z2;
    int salir;
    printf("DISTANCIA ENTRE DOS PUNTOS EN EL ESPACIO.\n"
           "Escriba las coordenadas cartesianas del primer punto.\n");
    printf("Posicion en el eje X: ");
    scanf("%f",&x1);
    printf("Posicion en el eje Y: ");
    scanf("%f",&y1);
    printf("Posicion en el eje Z: ");
    scanf("%f",&z1);
    printf("Escriba las coordenadas del segundo punto.\n");
    printf("Posicion en el eje X: ");
    scanf("%f",&x2);
    printf("Posicion en el eje Y: ");
    scanf("%f",&y2);
    printf("Posicion en el eje Z: ");
    scanf("%f",&z2);

    printf("\nPrimer punto es: (%.2f,%.2f,%.2f), Segundo punto es: (%.2f,%.2f,%.2f)\n"
           "Y la distancia entre ellos es: %.2f",x1,y1,z1,x2,y2,z2, sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)));
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;

}

int distancia_entre_dos_puntos_plano(){
    float x1,x2,y1,y2;
    int salir;
    printf("DISTANCIA ENTRE DOS PUNTOS EN UN PLANO.\n"
           "Escriba las coordenadas del primer punto.\n");
    printf("Posicion en el eje X: ");
    scanf("%f",&x1);
    printf("Posicion en el eje Y: ");
    scanf("%f",&y1);
    printf("Escriba las coordenadas del segundo punto.\n");
    printf("Posicion en el eje X: ");
    scanf("%f",&x2);
    printf("Posicion en el eje Y: ");
    scanf("%f",&y2);
    printf("\nPrimer punto es: (%.2f,%.2f), Segundo punto es: (%.2f,%.2f)\n"
           "Y la distancia entre ellos es: %.2f",x1,y1,x2,y2, sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de vectores: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}


int menu_vectores(void)
{
    int Operacion_a_utilizar;
    printf("Usted ha entrado a las operaciones con vectores.\n");
    printf("1. Calculo de la distancia entre dos puntos en el plano. \n"
           "2. Calculo de la distancia entre dos puntos en el espacio. \n"
           "3. Suma de dos vectores (de n elementos). \n"
           "4. Resta de dos vectores (de n elementos). \n"
           "5. Multiplicacion de un escalar por un vector (el vector debe ser de n elementos). \n"
           "6. Angulo entre dos vectores (vectores de n elementos). \n"
           "7. Producto punto entre dos vectores (vectores de n elementos). \n"
           "8. Producto cruz entre dos vectores (vectores de n elementos).\n"
           "9. Volver al menu principal.\n");
    printf("\nSeleccione la operacion a utilizar:  ");
    scanf("%i",&Operacion_a_utilizar);
    return Operacion_a_utilizar;

}


int tribonacci() {
    int valor = 0;
    int a = 0;
    int b = 0;
    int c = 1;
    int salir;
    printf("Ingresa hasta que iteracion se calculara:");
    scanf("%i", &valor);
    printf("%i \n %i \n %i \n", a, b, c);
    for (int i = 0; i < valor; i++) {
        a = b;
        b = c;
        c = a + b;
        printf("%i\n", c);

    }
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de escalares: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int fibonacci() {
    int n,salir;
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
    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de escalares: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;
}

int factorial() {
    int n,salir;
    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %d es %d\n", n, factorial);

    printf("\nDeseas seguir usando la calculadora?\n"
           "SI, Volver a la calculadora de escalares: 1\n"
           "NO, Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);
    else
        return 1;

}
int menu_escalares() {
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
    return opcion;
}


void matrices(){

}


int main() {
    char Opcion;
    printf("Bienvenido a la calculadora maxima!!!\n");
    printf("Escoge una de las siguientes opciones para empezar:\n");
    printf("A. Operaciones con escalares.\n");
    printf("B. Operaciones con vectores.\n");
    printf("C. Operaciones con matrices.\n");

    scanf("%c", &Opcion);
    Opcion = toupper(Opcion);
    int o = 0;
    switch (Opcion) {
        case 'A':
            while (o==0){
                switch (menu_escalares()) {
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
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                        o+=1;
                }
            }
        case 'B':
            while (o == 0) {
                switch (menu_vectores()) {
                    case 1:
                        distancia_entre_dos_puntos_plano();
                        break;
                    case 2:
                        distancia_entre_dos_puntos_espacio();
                        break;
                    case 3:
                        suma_dos_vectores();
                        break;
                    case 4:
                        resta_dos_vectores();
                        break;
                    case 5:
                        escalar_por_vector();
                        break;
                    case 6:
                        angulo_dos_vectores();
                        break;
                    case 7:
                        producto_punto();
                        break;
                    case 8:
                        producto_cruz();
                        break;
                    case 9:
                        o+=1;
                    default:
                        printf("El numero que escribiste no correspnde a ninguna operacion");
                        break;
                }
            }
        case 'C':
            matrices();
            break;
        default:
            break;
                }
}


