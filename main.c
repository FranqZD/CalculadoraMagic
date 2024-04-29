#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

//VECTORES

//Funcion vectores calculo de una multiplicacion por producto cruz
int producto_cruz()
{
    int num_elementos;
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

        return 1;
}

//Funcion vectores calculo de una multiplicacion por producto cruz
int producto_punto()
{
    int num_elementos;
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
        return 1;
}

//Funcion vectores calculo de un angulo entre dos vectores
int angulo_dos_vectores()
{
    int num_elementos;
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

        return 1;
}

//Funcion vectores calculo de una escalar por un vector
int escalar_por_vector()
{
    int num_elementos;
    float por=0;
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
    scanf("%f",&por);

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
    
        return 1;
}

//Funcion vectores resta de dos vectores
int resta_dos_vectores(){
    int num_elementos;
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
    printf("\n\n");
    printf("\nLa diferencia de los vectores es: [");
    for (int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]-vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");


        return 1;

}

//Funcion vectores suma de dos
int suma_dos_vectores(){
    int num_elementos;
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
printf("\n\n");
    printf("\nLa suma de los vectores es: [");
    for (int i=0;i<num_elementos;i++){
        printf("%.2f",vector_1[i]+vector_2[i]);
        if (i==num_elementos-1)
            break;
        printf(", ");
    }
    printf("]");

        return 1;


}

//Funcion vectores distancia entre dos puntos
int distancia_entre_dos_puntos_espacio(void)
{
    float x1,x2,y1,y2,z1,z2;

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
printf("\n\n");
    printf("\nPrimer punto es: (%.2f,%.2f,%.2f), Segundo punto es: (%.2f,%.2f,%.2f)\n"
           "Y la distancia entre ellos es: %.2f",x1,y1,z1,x2,y2,z2, sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)));
        return 1;

}

//Funcion vectores calculo de la distancia entre dos puntos en un plano
int distancia_entre_dos_puntos_plano(){
    float x1,x2,y1,y2;
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
    printf("\n\n");
    printf("\nPrimer punto es: (%.2f,%.2f), Segundo punto es: (%.2f,%.2f)\n"
           "Y la distancia entre ellos es: %.2f",x1,y1,x2,y2, sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
return 1;
}


//ESCALARES

//Calculo de Tribonacci mkbro
int tribonacci() {
       int valor = 0;
    int a = 0;
    int b = 0;
    int c = 1;
    int aux = 0;
    printf("Ingresa hasta que iteracion se calculara:\n");
    scanf("%i", &valor);
    printf("\n\n");
    printf("Iteracion 1: %i \nIteracion 2: %i \nIteracion 3: %i \n", a, b, c);
    for (int i = 0; i < valor-3; i++) {
        printf("Iteracion %i: %i\n", i+4,a+b+c);
        aux=c;
        c += a + b;
        a = b;
        b = aux;
    }
        return 1;
}

//Fibonacci Ez af
int fibonacci() {
    int n;
    printf("Introduce un numero para calcular su serie de fibonacci: \n");
    scanf("%d", &n);
    printf("\n\n");
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }

        return 1;
}

//Factorial fasilito
int factorial() {
    int n;
    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("\n\nEl factorial de %d es %d\n", n, factorial);

        return 1;

}

//Pura formulona
int Raices(){
    float a,b,c;
    float x1,x2;
    printf("Ingresa las raices de tu polinomio de segundo grado\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    float discriminante = pow(b,2)-4*a*c;
    if(discriminante>0){
        x1 = (-b+sqrt(discriminante))/(2*a);
        x2 = (-b-sqrt(discriminante))/(2*a);
        printf("Las raices de tu polinomio son: %.2f y %.2f\n",x1,x2);
    }
    else if(discriminante==0){
        x1 = -b/(2*a);
        printf("La raiz de tu polinomio es: %.2f\n",x1);
    }else{
        float real = -b/(2*a);
        float imaginario = sqrt(-discriminante)/(2*a);
        printf("Las raices de tu polinomio son: %.2f + %.2fi y %.2f - %.2fi\n",real,imaginario,real,imaginario);
    }
    return 1;
}

//Formulin
int GradosRad(){
    int grados;
    printf("Ingresa los grados a convertir a radianes: ");
    scanf("%i",&grados);
    printf("Los grados %i son %.2f radianes\n",grados,grados*(3.14159265/180));
    return 1;
}

//Formulin
int RadGrados(){
    float radianes;
    printf("Ingresa los radianes a convertir a grados: ");
    scanf("%f",&radianes);
    printf("Los radianes %.2f son %i grados\n",radianes,(int)(radianes*(180/3.14159265)));
    return 1;
}

int RectCil(){
    float x,y,z;
    printf("Ingresa las coordenadas rectangulares a convertir a cilindricas\n");
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    printf("z: ");
    scanf("%f",&z);
    float r = sqrt(pow(x,2)+pow(y,2));
    float theta = atan(y/x);
    printf("Las coordenadas rectangulares %.2f, %.2f, %.2f son %.2f, %.2f, %.2f\n",x,y,z,r,theta,z);
    return 1;
}

int rectEsfericas(){
    float x,y,z;
    printf("Ingresa las coordenadas rectangulares a convertir a esfericas\n");
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    printf("z: ");
    scanf("%f",&z);
    float r = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    float theta = atan(y/x);
    float phi = acos(z/r);
    printf("Las coordenadas rectangulares %.2f, %.2f, %.2f son %.2f, %.2f, %.2f\n",x,y,z,r,theta,phi);
    return 1;
}

//MENU DE LAS ESCALARES
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
    printf("9: Finalizar la calculadora de escalares\n");
    scanf("%d", &opcion);
    return opcion;
}

//MENU DE LOS VECTORES
int menu_vectores(void)
{

    int Operacion_a_utilizar;
    printf("Escoge una de las siguientes opciones para empezar:\n");
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

void matrices(){

}


int main(void) {
int Final = 0;
    
    
    printf("Bienvenido a la calculadora maxima!!!\n");
    printf("Escoge una de las siguientes opciones para empezar:\n");
    while (Final==0)
    {
    char Opcion;
    printf("A. Operaciones con escalares.\n");
    printf("B. Operaciones con vectores.\n");
    printf("C. Operaciones con matrices.\n");

    scanf("%c", &Opcion);
    Opcion = toupper(Opcion);
    int o = 0;
    while (o==0){
        system("cls");
    switch (Opcion) {
        //MENU DE LAS ESCALARES
        case 'A':
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
                        Raices();
                    break;
                    case 5:
                        GradosRad();
                    break;
                    case 6:
                        RadGrados();
                    break;
                    case 7:
                        RectCil();
                    break;
                    case 8:
                        rectEsfericas();
                    break;
                    case 9:
                        o+=1;
                        break;
                        default:
                        printf("Esa no es una opcion valida \n");
            }
            break;
            //MENU DE LOS VECTOREs
        case 'B':
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
                        break;
                    default:
                        printf("Esa no es una opcion valida \n");
                        break;
                }
                break;
        case 'C':
        //MENU DE LAS MATRICES
            matrices();
            break;
        default:
        printf("Esa no es una opcion valida \n");
            break;
            break;
                }
                        system("pause");
    }
                printf("Quieres hacer alguna otra operacion? \n 0: SI\n 1: NO\n");
                scanf("%i",&Final);
                if(Final==0){
                    o=0;
                }
             fflush(stdin);   
}
return 0;
}


