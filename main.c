#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
//PROYECTO PRIMERA Y SEGUNDA EVALUACIÓN
//Luis Francisco Zarate Diaz, Luis Fernando Del Real Vázquez
//VECTORES
//Funcion vectores calculo de una multiplicacion por producto cruz
void producto_cruz()
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


}

//Funcion vectores calculo de una multiplicacion por producto cruz
void producto_punto()
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

}

//Funcion vectores calculo de un angulo entre dos vectores
void angulo_dos_vectores()
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


}

//Funcion vectores calculo de una escalar por un vector
void escalar_por_vector()
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
    

}

//Funcion vectores resta de dos vectores
void resta_dos_vectores(){
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




}

//Funcion vectores suma de dos
void suma_dos_vectores(){
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




}

//Funcion vectores distancia entre dos puntos
void distancia_entre_dos_puntos_espacio(void)
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


}

//Funcion vectores calculo de la distancia entre dos puntos en un plano
void distancia_entre_dos_puntos_plano(){
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

}


//ESCALARES

//Calculo de Tribonacci mkbro
void tribonacci() {
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
}

//Fibonacci Ez af
void fibonacci() {
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


}

//Factorial fasilito
void factorial() {
    int n;
    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("\n\nEl factorial de %d es %d\n", n, factorial);



}

//Pura formulona
void Raices(){
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

}

//Formulin
void GradosRad(){
    int grados;
    printf("Ingresa los grados a convertir a radianes: ");
    scanf("%i",&grados);
    printf("Los grados %i son %.2f radianes\n",grados,grados*(3.14159265/180));

}

//Formulin
void RadGrados(){
    float radianes;
    printf("Ingresa los radianes a convertir a grados: ");
    scanf("%f",&radianes);
    printf("Los radianes %.2f son %i grados\n",radianes,(int)(radianes*(180/3.14159265)));

}

void RectCil(){
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

}

void rectEsfericas(){
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

int menu_matrices(void)
{

    int Operacion_a_utilizar;
    printf("Escoge una de las siguientes opciones para empezar:\n");
    printf("1. Suma de dos matrices (de n x m elementos). \n"
           "2. Resta de dos matrices (de n x m elementos). \n"
           "3. Transposicion de una matriz (de n x m elementos). \n"
           "4. Multiplicacion de un escalar por una matriz (la matriz ene n x m elementos). \n"
           "5. Multiplicacion de dos matrices (las dimensiones de las matrices son indicadas por el \n"
           "usuario). \n"
           "6. Potencia n de una matriz (de n x m elementos). \n"
           "7. Calculo del determinante de una matriz utilizando la regla de Cramer."
           "a. Aplica solo para matrices de hasta 4 x 4. \n"
           "8. Volver al menu principal.\n");
    printf("\nSeleccione la operacion a utilizar:  ");
    scanf("%i",&Operacion_a_utilizar);
    return Operacion_a_utilizar;

}
void determinante(void) {
    int dim = 0;
    int ini_col = 0;
    int salir;
    float producto = 1;
    float determinante = 0;
    float matriz[4][7] = {{0},{0},{0},{0}};

    fflush(stdin);
    printf("Este programa calcula el determinante de matrices de 2x2, 3x3 o 4x4.\n");
    printf("Coloca la dimension de la matriz: ");
    scanf("%d", &dim);
    printf("\n");

    for(int i=0; i < dim; i++) {
        for (int j=0; j < dim; j++) {
            printf("Coloca el valor correspondiente a matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    if (dim == 2) {
        determinante = matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
    } else if (dim == 3) {
        //Copiando columnas
        for (int i=0; i < dim; i++) {
            matriz[i][dim] = matriz[i][0];
            matriz[i][dim+1] = matriz[i][1];
        }

        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = 0; i < dim; j++, i++) {
                producto *= matriz[i][j];
            }
            determinante += producto;
            ini_col++;
            producto = 1;
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = dim-1; i >= 0; j++, i--) {
                producto *= matriz[i][j];
            }
            determinante -= producto;
            ini_col++;
            producto = 1;
        }
    } else if(dim == 4) {

        //Copiando columnas
        for (int i=0; i < dim; i++) {
            matriz[i][dim] = matriz[i][0];
            matriz[i][dim+1] = matriz[i][1];
            matriz[i][dim+2] = matriz[i][2];
        }

        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = 0; i < dim; j++, i++) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col)*producto;
            ini_col++;
            producto = 1;
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = dim-1; i >= 0; j++, i--) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col)*producto;
            ini_col++;
            producto = 1;
        }

        //Intercambio de columnas
        float temp;
        for(int i=0; i<dim; i++) {
            temp = matriz[i][1];
            matriz[i][1] = matriz[i][2];
            matriz[i][2] = temp;
        }
        //Copiando columnas
        for (int i=0; i < dim; i++) {
            matriz[i][dim] = matriz[i][0];
            matriz[i][dim+1] = matriz[i][1];
            matriz[i][dim+2] = matriz[i][2];
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = 0; i < dim; j++, i++) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col+1)*producto;
            ini_col++;
            producto = 1;
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = dim-1; i >= 0; j++, i--) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col+1)*producto;
            ini_col++;
            producto = 1;
        }

        //Intercambio de columnas
        for(int i=0; i<dim; i++) {
            temp = matriz[i][2];
            matriz[i][2] = matriz[i][3];
            matriz[i][3] = temp;
        }

        //Copiando columnas
        for (int i=0; i < dim; i++) {
            matriz[i][dim] = matriz[i][0];
            matriz[i][dim+1] = matriz[i][1];
            matriz[i][dim+2] = matriz[i][2];
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = 0; i < dim; j++, i++) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col)*producto;
            ini_col++;
            producto = 1;
        }

        ini_col = 0;
        for (int elem = 0; elem < dim; elem++) {
            for (int j=ini_col, i = dim-1; i >= 0; j++, i--) {
                producto *= matriz[i][j];
            }
            determinante += pow(-1,ini_col)*producto;
            ini_col++;
            producto = 1;
        }
    }

    printf("El determinante de la matriz es: %8.4f", determinante);
}

void potencia() {
    // Cálculo de la potencia de una matriz
    int filas, columnas;
    printf("Ingresa las dimensiones de la matriz, filas y columnas separadas por un espacio: ");
    scanf("%i %i", &filas, &columnas);
    
    float Matriz[filas][columnas];
    
    printf("Ingresa los valores de los elementos de tu matriz:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("Valor en la fila %i, columna %i: ", i + 1, j + 1);
            scanf("%f", &Matriz[i][j]);
        }
    }
    
    printf("La matriz es:\n");
    for(int f = 0; f < filas; f++) {
        printf("|");
        for(int g = 0; g < columnas; g++) {
            printf(" %.2f ", Matriz[f][g]);
        }
        printf("|\n");
    }
    
    int potencia;
    printf("Ingresa la potencia a la que deseas elevar la matriz: ");
    scanf("%i", &potencia);
    
    float MatrizR[filas][columnas];
    
    // Inicializar la matriz resultante con la matriz original
    for(int f = 0; f < filas; f++) {
        for(int g = 0; g < columnas; g++) {
            MatrizR[f][g] = Matriz[f][g];
        }
    }
    
    // Multiplicar la matriz original por sí misma (potencia - 1) veces
    for(int i = 1; i < potencia; i++) {
        // Crear una matriz temporal para almacenar el resultado de la multiplicación
        float Temporal[filas][columnas];
        
        // Inicializar la matriz temporal con ceros
        for(int f = 0; f < filas; f++) {
            for(int g = 0; g < columnas; g++) {
                Temporal[f][g] = 0;
            }
        }
        
        // Realizar la multiplicación de la matriz original por la matriz resultante
        for(int f = 0; f < filas; f++) {
            for(int g = 0; g < columnas; g++) {
                for(int h = 0; h < columnas; h++) {
                    Temporal[f][g] += Matriz[f][h] * MatrizR[h][g];
                }
            }
        }
        
        // Actualizar la matriz resultante con el resultado de la multiplicación
        for(int f = 0; f < filas; f++) {
            for(int g = 0; g < columnas; g++) {
                MatrizR[f][g] = Temporal[f][g];
            }
        }
    }
    
    printf("La matriz elevada a la potencia %i es:\n", potencia);
    for(int f = 0; f < filas; f++) {
        printf("|");
        for(int g = 0; g < columnas; g++) {
            printf(" %.2f ", MatrizR[f][g]);
        }
        printf("|\n");
    }
}

void transposicion(){
    int filas, columnas;
    printf("Ingresa las dimensiones de la matriz, filas y columnas separadas por un espacio: ");
    scanf("%i %i", &filas, &columnas);
    
    float Matriz[filas][columnas];
    
    printf("Ingresa los valores de los elementos de tu matriz:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("Valor en la fila %i, columna %i: ", i + 1, j + 1);
            scanf("%f", &Matriz[i][j]);
        }
    }
    
    printf("La matriz es:\n");
    for(int f = 0; f < filas; f++) {
        printf("|");
        for(int g = 0; g < columnas; g++) {
            printf(" %.2f ", Matriz[f][g]);
        }
        printf("|\n");
    }
    
    float MatrizT[columnas][filas];
    
    for(int f = 0; f < columnas; f++) {
        for(int g = 0; g < filas; g++) {
            MatrizT[f][g] = Matriz[g][f];
        }
    }
    
    printf("La matriz transpuesta es:\n");
    for(int f = 0; f < columnas; f++) {
        printf("|");
        for(int g = 0; g < filas; g++) {
            printf(" %.2f ", MatrizT[f][g]);
        }
        printf("|\n");
    }
}

void escalarpormatriz(){
    int filas, columnas;
    printf("Ingresa las dimensiones de la matriz, filas y columnas separadas por un espacio: ");
    scanf("%i %i", &filas, &columnas);
    
    float Matriz[filas][columnas];
    
    printf("Ingresa los valores de los elementos de tu matriz:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("Valor en la fila %i, columna %i: ", i + 1, j + 1);
            scanf("%f", &Matriz[i][j]);
        }
    }
    
    printf("La matriz es:\n");
    for(int f = 0; f < filas; f++) {
        printf("|");
        for(int g = 0; g < columnas; g++) {
            printf(" %.2f ", Matriz[f][g]);
        }
        printf("|\n");
    }
    
    float escalar;
    printf("Ingresa el escalar por el que deseas multiplicar la matriz: ");
    scanf("%f", &escalar);
    
    for(int f = 0; f < filas; f++) {
        for(int g = 0; g < columnas; g++) {
            Matriz[f][g] *= escalar;
        }
    }
    
    printf("La matriz multiplicada por el escalar es:\n");
    for(int f = 0; f < filas; f++) {
        printf("|");
        for(int g = 0; g < columnas; g++) {
            printf(" %.2f ", Matriz[f][g]);
        }
        printf("|\n");
    }
}

void multiplicacion_dos_matrices(){
    float **matrizA;
    float **matrizB;
    float **matrizR;
    int filMA, colMA,salir;
    int filMB, colMB;

    printf("Este programa recibe dos matrices definidas por el usuario y obtiene su producto.\n");
    printf("Indica el numero de filas y columnas de la matrizA separadas por un espacio: ");
    scanf("%d %d", &filMA, &colMA);
    printf("Indica el numero de filas y columnas de la matrizB separadas por un espacio: ");
    scanf("%d %d", &filMB, &colMB);

    if(colMA != filMB) {
        printf("¡¡¡Corran por sus vidas!!!\n");
        exit(0);
    }

    matrizA = malloc(sizeof(*matrizA)*filMA);
    if(matrizA) {
        for(int f=0; f < filMA; f++) {
            matrizA[f] = malloc(sizeof(*matrizA[f])*colMA);
        }
    } else {
        printf("¡¡¡Corran por sus vidas!!!\n");
        exit(0);
    }

    matrizB = malloc(sizeof(*matrizB)*filMB);
    if(matrizB) {
        for(int f=0; f < filMB; f++) {
            matrizB[f] = malloc(sizeof(*matrizB[f])*colMB);
        }
    } else {
        printf("¡¡¡Corran por sus vidas!!!\n");
        exit(0);
    }

    matrizR = malloc(sizeof(*matrizR)*filMA);
    if(matrizR) {
        for(int f=0; f < filMA; f++) {
            matrizR[f] = malloc(sizeof(*matrizR[f])*colMB);
        }
    } else {
        printf("¡¡¡Corran por sus vidas!!!\n");
        exit(0);
    }

    printf("\nIngresa los datos de la matriz A:\n");
    for(int f=0; f < filMA; f++) {
        for(int c=0; c < colMA; c++) {
            printf("Coloca el valor de matrizA[%d][%d]: ", f, c);
            scanf("%f", &matrizA[f][c]);
        }
    }

    printf("\nIngresa los datos de la matriz B:\n");
    for(int f=0; f < filMB; f++) {
        for(int c=0; c < colMB; c++) {
            printf("Coloca el valor de matrizB[%d][%d]: ", f, c);
            scanf("%f", &matrizB[f][c]);
        }
    }

    for (int f=0; f < filMA; f++) {
        for (int c=0; c < colMB; c++) {
            matrizR[f][c] = 0.0;
            for (int interno = 0; interno < colMA; interno++) {
                matrizR[f][c] += matrizA[f][interno]*matrizB[interno][c];
            }
        }
    }

    printf("Matriz A:\n");
    for(int f=0; f < filMA; f++) {
        printf("|");
        for(int c=0; c < colMA; c++) {
            printf(" %.4f ", matrizA[f][c]);
        }
        printf("|\n");
    }

    printf("Matriz B:\n");
    for(int f=0; f < filMB; f++) {
        printf("|");
        for(int c=0; c < colMB; c++) {
            printf(" %.4f ", matrizB[f][c]);
        }
        printf("|\n");
    }

    printf("Matriz R:\n");
    for(int f=0; f < filMA; f++) {
        printf("|");
        for(int c=0; c < colMB; c++) {
            printf(" %.4f ", matrizR[f][c]);
        }
        printf("|\n");
    }

    for(int i=0; i < filMA; i++) {
        free(matrizA[i]);
    }
    free(matrizA);

    for(int i=0; i < filMB; i++) {
        free(matrizB[i]);
    }
    free(matrizB);

    for(int i=0; i < filMA; i++) {
        free(matrizR[i]);
    }
    free(matrizR);
}

void suma_dos_matrices(){
    int filas,columnas,salir;
    printf("Ingresa la dimenson de las matrices, filas y columnas separadas por un espacio: ");
    scanf("%i",&filas);
    scanf("%i",&columnas);
    float Matriz1[filas][columnas];
    float Matriz2[filas][columnas];
    printf("Ingresa los valores de los elementos de tu primera matriz:\n ");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("Valor en la fila %i, columna %i: ",i+1,j+1);
            scanf("%f",&Matriz1[i][j]);
        }
    }
    printf("Ingresa los valores de los elementos de tu segunda matriz:\n ");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("Valor en fila %i, columna %i: ",i+1,j+1);
            scanf("%f",&Matriz2[i][j]);
        }
    }
    printf("\nLa suma entre la matriz 1:\n");
    for(int f=0;f<filas;f++){
        printf("|");
        for(int g=0;g<columnas;g++){
            printf(" %.2f ",Matriz1[f][g]);
        }
        printf("|");
        printf("\n");
    }
    printf("\nY la matriz 2:\n");
    for(int p=0;p<filas;p++){
        printf("|");
        for(int a=0;a<columnas;a++){
            printf(" %.2f ",Matriz2[p][a]);
        }
        printf("|");
        printf("\n");
    }
    printf("\nMatriz de resultado:\n");
    for(int i=0;i<filas;i++){
        printf("|");
        for(int j=0;j<columnas;j++){
            printf(" %.2f ",(Matriz1[i][j])+(Matriz2[i][j]));
        }
        printf("|");
        printf("\n");
    }
    printf("\nDeseas seguir usando la calculadora?\n"
           "Volver a la calculadora de escalares: 1\n"
           "Salir del programa: 0\n");
    scanf("%i",&salir);
    if(salir==0)
        exit(-1);

}

void resta_dos_matrices() {

    int filas, columnas, salir;
    printf("Ingresa la dimenson de las matrices, filas y columnas separadas por un espacio: ");
    scanf("%i", &filas);
    scanf("%i", &columnas);
    float Matriz1[filas][columnas];
    float Matriz2[filas][columnas];
    printf("Ingresa los valores de los elementos de tu primera matriz:\n ");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Valor en la fila %i, columna %i: ", i + 1, j + 1);
            scanf("%f", &Matriz1[i][j]);
        }
    }
    printf("Ingresa los valores de los elementos de tu segunda matriz:\n ");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Valor en fila %i, columna %i: ", i + 1, j + 1);
            scanf("%f", &Matriz2[i][j]);
        }
    }
    printf("\nLa resta entre la matriz 1:\n");
    for (int f = 0; f < filas; f++) {
        printf("|");
        for (int g = 0; g < columnas; g++) {
            printf(" %.2f ", Matriz1[f][g]);
        }
        printf("|");
        printf("\n");
    }
    printf("\nY la matriz 2:\n");
    for (int p = 0; p < filas; p++) {
        printf("|");
        for (int a = 0; a < columnas; a++) {
            printf(" %.2f ", Matriz2[p][a]);
        }
        printf("|");
        printf("\n");
    }
    printf("\nMatriz de resultado:\n");
    for (int i = 0; i < filas; i++) {
        printf("|");
        for (int j = 0; j < columnas; j++) {
            printf(" %.2f ", (Matriz1[i][j]) - (Matriz2[i][j]));
        }
        printf("|");
        printf("\n");
    }
}


int main(void) {
    exe();
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
                        break;
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
                switch (menu_matrices()) {
                    //Hecho
                    case 1:
                        suma_dos_matrices();
                        break;
                        //Hecho
                    case 2:
                        resta_dos_matrices();
                        break;
                        //Hecho
                    case 3:
                        transposicion();
                    break;
                    //progress
                    case 4:
                        escalarpormatriz();
                        break;
                        //Hecho
                    case 5:
                        multiplicacion_dos_matrices();
                        break;
                        //Hecho
                    case 6:
                        potencia();
                        break;
                    case 7:
                        determinante();
                        break;
                    case 8:
                        o+=1;
                        break;
                    default:
                        printf("Esa no es una opcion valida \n");
                        break;
                }
            break;
        default:
            printf("Esa no es una opcion valida \n");
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


