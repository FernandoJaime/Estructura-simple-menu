//Ejercicio menu version 1

#include<stdio.h>
//Prototipos de las funciones: 
void opcion1();
void opcion2();
void opcion3();

int main () {
    int op;
    while(op != 0) {
        printf("1- opcion 1 \n");
        printf("2- opcion 2 \n");
        printf("3- opcion 3 \n");
        printf("0- salir \n");
        do { //Pedir que ingrese la opcion, como es un do-while es lo primero que muestra antes de verificar
            printf("Ingrese la opcion: \n");
            scanf("%d", &op);
        }while (op < 0 || op > 3); //Esto tambien se puede hacer con una negacion: (! (op >= 0 && op <= 2))
        switch (op) {
            case 1: opcion1();
            break;
            case 2: opcion2();
            break;
            case 3: opcion3();
            break;
            case 0: printf("Saliendo del menu \n");
            break; 
            //Aca el default seria inesesario debido a que ya esta validado con el do-while
        }
    }
    printf("Fin del programa \n");
    return 0;
}
//Funciones:
void opcion1() {
    printf("Estoy en la opcion 1 \n"); 
    return;
}
void opcion2() {
    printf("Estoy en la opcion 2 \n"); 
    return;
}
void opcion3() {
    printf("Estoy en la opcion 3 \n"); 
    return;
}