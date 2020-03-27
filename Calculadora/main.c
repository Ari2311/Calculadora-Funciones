
#include <stdio.h>
#include <math.h>
   
   void  Suma(float n1, float n2);
   void   Resta(float n1, float n2);
   void  Division(float n1, float n2);
   void   Multiplicacion(float n1, float n2);
   void  Potencia(float n1, float n2);
   void   Raiz(float n1, float n2);
  
    
int main(void)
{
    
    int opcion;
    do{
    printf("Elige una opcion:\n");
    printf("\t 1.- Suma\n");
    printf("\t 2.- Resta\n");
    printf("\t 3.- Division\n");
    printf("\t 4.- Multiplicacion\n");
    printf("\t 5.- Potencia\n");
    printf("\t 6.- Raiz cuadrada\n");
    printf("\t 7.- Salir\n");
    scanf("%d",&opcion);
    system("cls");
  
    float n1, n2;
    
         if(opcion>=7){
        }
        else{
    printf("\nDame el primer valor: ");
    scanf("%f", &n1);
    printf("\nDame el segundo valor: ");
    scanf("%f", &n2);
            
        }
    
  switch(opcion)
    {
    case 1:
            Suma(n1,n2);
        break;
    case 2:
        Resta(n1,n2);
        break;
    case 3:
        if(n2==0)
        {
            printf("La operacion entre 0 no esta definida");
        }
        else{
            Division(n1,n2);
        }
        break;
    case 4:
       Multiplicacion(n1,n2);
        break;
    case 5:
        Potencia(n1,n2);
        break;
    case 6:
        if(n1<0){
                printf("No esta definida");
        }
        else{
            Raiz(n1,n2);
        }
        break;
    default:
        printf("Salir");
        exit(0);
    }    //Sale break
}while(opcion<7);
}

    void  Suma(float n1, float n2)
{
    printf("El resultado es: %f", n1+n2);
}
    void  Resta(float n1, float n2)
{
    printf("El resultado es: %f", n1-n2);
}
    void  Division(float n1, float n2)
{
    printf("El resultado es: %f", n1/n2);
}
    void  Multiplicacion(float n1, float n2)
{
    printf("El resultado es: %f", n1*n2);
}
    void  Potencia(float n1, float n2)
{
    printf("El resultado es: %f", pow (n1,n2));
}
    void  Raiz(float n1, float n2)
{
    printf("El resultado es: %f", sqrt (n1));
}

