//  Perez Benitez Damian    
//  Carbajal Urquisa Luis Fhernando

#include "listaD.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int option = 0, option2 = 0, aux =0, inferior = 0, auxiliarFinal;
    ListaD *bebida, *embutido, *fruta, *lacteo, *carne, *verdura, *listaTemporal;
    int idBebida=0, idEmbutido=0, idFruta=0, idLacteo=0, idCarne=0, idVerdura=0;
    //Se crean las listas de todos los alimentos
    bebida   =  crear_ListaDoble();
    embutido =  crear_ListaDoble();
    fruta    =  crear_ListaDoble();
    lacteo   =  crear_ListaDoble();
    carne    =  crear_ListaDoble();
    verdura  =  crear_ListaDoble();

    Nodo *ele1;

    while(option !=7){
        printf("\nREFRIGERADOR ABIERTO\n");
        printf("Selecciona el apartado de tu preferencia");
        printf("\n1- Bebidas");
        printf("\n2- Embutidos");
        printf("\n3- Frutas");
        printf("\n4- Lacteos");
        printf("\n5- Carnes");
        printf("\n6- Verduras");
        printf("\n7- Salir");
        printf("\n   Opcion:\t");
        scanf("%d",&option);
        switch(option){
            case 1:
                do{
                    printf("\nSECCION DE BEBIDAS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar una bebida");
                    printf("\n2- Quitar una bebida");
                    printf("\n3- Mostrar la lista de bebidas");
                    printf("\n4- Buscar una bebida");
                    printf("\n5- Ordenar bebidas por precio");
                    printf("\n6- Vaciar lista de bebidas");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2);  
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idBebida);
                            insertar_cabeza(bebida,ele1);
                            idBebida++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(bebida);
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(bebida);
                            idBebida = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    }
                }while(option2 !=7);
                break;
            case 2:
                do{
                    printf("\nSECCION DE EMBUTIDOS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar un embutido");
                    printf("\n2- Quitar un embutido");
                    printf("\n3- Mostrar la lista de embutidos");
                    printf("\n4- Buscar un embutido");
                    printf("\n5- Ordenar embutidos por precio");
                    printf("\n6- Vaciar lista de embutidos");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2); 
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idEmbutido);
                            insertar_cabeza(embutido,ele1);
                            idEmbutido++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(embutido);
                            break;
                        case 4:
                            
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(embutido);
                            idEmbutido = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    }
                }while(option2 !=7);
                break;
            case 3:
                do{
                    printf("\nSECCION DE FRUTAS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar una fruta");
                    printf("\n2- Quitar una fruta");
                    printf("\n3- Mostrar la lista de frutas");
                    printf("\n4- Buscar una fruta");
                    printf("\n5- Ordenar bfrutas por precio");
                    printf("\n6- Vaciar lista de frutas");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2); 
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idFruta);
                            insertar_cabeza(fruta,ele1);
                            idFruta++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(fruta);
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(fruta);
                            idFruta = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    }
                }while(option2 !=7);
                break;
            case 4:
                do{
                    printf("\nSECCION DE LACTEOS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar un lateo");
                    printf("\n2- Quitar un lacteo");
                    printf("\n3- Mostrar la lista de lacteos");
                    printf("\n4- Buscar un lacteo");
                    printf("\n5- Ordenar lacteos por precio");
                    printf("\n6- Vaciar lista de lacteos");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2); 
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idLacteo);
                            insertar_cabeza(lacteo,ele1);
                            idLacteo++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(lacteo);
                            break;
                        case 4:
                            
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(lacteo);
                            idLacteo = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    }
                }while(option2 !=7);
                break;
            case 5:
                do{
                    printf("\nSECCION DE PROTEINAS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar una proteina");
                    printf("\n2- Quitar una proteina");
                    printf("\n3- Mostrar la lista de proteinas");
                    printf("\n4- Buscar una proteina");
                    printf("\n5- Ordenar proteinas por precio");
                    printf("\n6- Vaciar lista de proteinas");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2);
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idCarne);
                            insertar_cabeza(carne,ele1);
                            idCarne++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(carne);
                            break;
                        case 4:
                            
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(carne);
                            idCarne = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    } 
                }while(option2 !=7);
                break;
            case 6:
                do{
                    printf("\nSECCION DE VERDURAS");
                    printf("\nSelecciona la operacion deseada");
                    printf("\n1- Ingresar una verdura");
                    printf("\n2- Quitar una verdura");
                    printf("\n3- Mostrar la lista de verduras");
                    printf("\n4- Buscar una verdura");
                    printf("\n5- Ordenar verduras por precio");
                    printf("\n6- Vaciar lista de verduras");
                    printf("\n7- Regresar al menu principal");
                    printf("\n   Opcion:\t"); 
                    scanf("%d",&option2);
                    switch (option2){
                        case 1:
                            ele1 = crear_Nodo(agregar_Producto(option),idVerdura);
                            insertar_cabeza(verdura,ele1);
                            idVerdura++;
                            break;
                        case 2:
                            break;
                        case 3:
                            printLista(verdura);
                            break;
                        case 4:
                            
                            break;
                        case 5:
                            break;
                        case 6:
                            vaciarLista(verdura);
                            idVerdura = 0;
                            break;
                        case 7:
                            break;
                        default:
                            printf("\nIngresa una opcion valida\n");
                            break;
                    } 
                }while(option2 !=7);
                break;
            case 7:
                option = 7;
                printf("\nRefrigerador cerrado\n");
                break;
            default:
                printf ("\n\nIngresa una opcion valida\n"); 
                break;
        }
    }

    //Se liberan todas las listas antes de terminar el programa
    vaciarLista(bebida);
    vaciarLista(embutido);
    vaciarLista(fruta);
    vaciarLista(lacteo);
    vaciarLista(carne);
    vaciarLista(verdura);

    return(0);
}
