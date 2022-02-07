//  Perez Benitez Damian    
//  Carbajal Urquisa Luis Fhernando

#include "listaD.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones para generar las listas
Producto *agregar_Producto (int TIPO){
    Producto *aux = (Producto*)malloc(sizeof(Producto));
    //int option = 0, bandera = 1;
    /*switch (TIPO){
        case 1:
            strcpy(aux->tipoAlimento,"Bebida");
            break;
        case 2:
            strcpy(aux->tipoAlimento,"Embutido");
            break;
        case 3:
            strcpy(aux->tipoAlimento,"Fruta");
            break;
        case 4:
            strcpy(aux->tipoAlimento,"Lacteo");
            break;
        case 5:
            strcpy(aux->tipoAlimento,"Carne");
            break;
        default:
            strcpy(aux->tipoAlimento,"Verdura");
            break;
    }
    printf("\n Ingresa el nombre del producto (usa guiones bajos en vez de espacios): ");
    scanf("%s",&aux->nombreAlimento);*/
    printf("\n Ingresa su precio: $");
    scanf("%f",&aux->precio);
    /*printf("\n Dia de compra (en numero): ");
    scanf("%d",&aux->diaCompra);
    printf("\n Mes de compra (en numero): ");
    scanf("%d",&aux->mesCompra);
    printf("\n Anio de compra (en numero): ");
    scanf("%d",&aux->anioCompra);
    do{
        printf("\n Tu protucto tiene una fecha de caducidad especifica?");
        printf("\n Ingresa el numero");
        printf("\n 1) Si\t2) No\nOpcion: ");
        scanf("%d",&option);
        switch (option){
        case 1:
            printf("\n Dia de caducidad (en numero): ");
            scanf("%d",&aux->diaCaducicad);
            printf("\n Mes de caducidad (en numero): ");
            scanf("%d",&aux->mesCaducidad);
            printf("\n Anio de caducidad (en numero): ");
            scanf("%d",&aux->anioCaducidad);
            bandera = 0;
            break;
        case 2:
            aux->diaCaducicad = 0;
            aux->mesCaducidad = 0;
            aux->anioCaducidad = 0;
            bandera = 0;
            break;
        default:
            printf("\nIngresa un numero valido\n");
            break;
        }
    }while(bandera != 0);
    printf("\n Tiene disponibilidad?");
    printf("\n Ingresa el numero");
    printf("\n 1) Si\t2) No\nOpcion: ");
    scanf("%d",&option);
    if(option == 1)
        aux->disponibilidad = 1;
    else    
        aux->disponibilidad = 0;*/
    return (aux);
}

Producto *agregar_Producto_temporal(float elemento);
void copiar_Producto(Nodo *aux, Nodo *aux2);

Nodo *crear_Nodo (Producto *producto, int ID){
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->datos=producto;
    aux->identificador=ID;
    aux->sig=NULL;
    aux->ant=NULL;
    return(aux);
}

ListaD *crear_ListaDoble (){
    ListaD *aux=(ListaD*)malloc(sizeof(ListaD));
    aux->cabeza=NULL;
    return(aux);
}

//Funciones para editar las listas
int lista_vacia (ListaD lista){
    if(lista.cabeza==NULL){
        return(1);      //LISTA VACIA
    }
    else{
        return (0);     //LISTA NO VACIA
    }
}

void insertar_cabeza(ListaD *lista, Nodo *aux){
    if(lista_vacia(*lista)==1){
        lista->cabeza=aux;
    }
    else{
        lista->cabeza->ant=aux;
        aux->sig=lista->cabeza;
        lista->cabeza=aux;
    }
}

void insertar_cola(ListaD *lista, Nodo *aux){
    Nodo *cola;
    if(lista_vacia(*lista)==1){
        insertar_cabeza(lista,aux);
    }
    else{
        cola = lista->cabeza;
        while(cola->sig != NULL){
            cola=cola->sig;
        }
        cola->sig=aux;
        aux->ant=cola;
        cola=aux;
    }    
}
void insertar_enmedioD(ListaD *lista, Nodo *despues,Nodo *elemento){
    if(lista_vacia(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        if(despues->sig==NULL){
            insertar_cola(lista,elemento);
        }
        else{
            elemento->ant=despues;
            elemento->sig=despues->sig;
            despues->sig=elemento;
            despues=elemento->sig;
            despues->ant=elemento;
        }
    }
}

void insertar_enmedioA(ListaD *lista, Nodo *antes,Nodo *elemento){
    if(lista_vacia(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        if(antes->ant==NULL){
            insertar_cabeza(lista,elemento);
        }  
        else{
            elemento->sig=antes;
            elemento->ant=antes->ant;
            antes->ant=elemento; 
            antes=elemento->ant;
            antes->sig=elemento;
        }
    }    
}

void quitar_cabeza(ListaD *lista){
    Nodo *aux = NULL;
    if(!lista_vacia(*lista))
    {
        aux=lista->cabeza;
        if(aux->sig==NULL){
            aux->ant=NULL;
            aux=NULL;
            lista->cabeza=NULL;
            free(aux);
        }
        else{
            lista->cabeza=lista->cabeza->sig;
            lista->cabeza->ant=NULL;
            aux->sig=NULL;
            aux->ant=NULL;
            free(aux);
        }
    }
    else{
        printf("\n La lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }    
}

void quitar_cola(ListaD *lista){
    Nodo *cola;
    Nodo * aux;
    if(lista_vacia(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else
    {
        if(lista->cabeza->sig == NULL)
        {
            cola=lista->cabeza;
            lista->cabeza=NULL;
            free(cola);
            printf("\n  Memoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else
        {
            cola=lista->cabeza;
            while(cola->sig != NULL)
            {
                cola = cola->sig;
            }
            aux=cola;
            cola=aux->ant;
            cola->sig=NULL;
            aux->ant=NULL;
            free(aux);
        }
    }    
}
void quitar_enmedio(ListaD *lista, Nodo *elemento){
    Nodo *aux;
    Nodo *borrar;
    if(lista_vacia(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar=buscaElemento(lista,elemento);//pendiente
        if(borrar==NULL){
            printf("\n El elemento no se encuentra en la lista\n");  
        }
        else{
            if(lista->cabeza == borrar){
                quitar_cabeza(lista);
            }
            else{
                aux=borrar->ant;
                aux->sig=borrar->sig;
                aux=borrar->sig;
                aux->ant=borrar->ant;
                borrar->ant=NULL;
                borrar->sig=NULL;
                free(borrar);
            }
        }
    }    
}
void vaciarLista(ListaD *lista){
    Nodo *aux = lista->cabeza;
    if(lista_vacia(*lista)==1){
        printf("\n LISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    else{
        while(aux->sig != NULL){
            aux=aux->sig;
            quitar_cabeza(lista);
        }
        quitar_cabeza(lista);
    }
    free(aux);
}

void printLista(ListaD *lista){
    Nodo *aux = lista->cabeza;
    Producto *product;
    if (lista_vacia(*lista) != 1){
        while (aux != NULL){
            product = aux->datos;
            /*printf ("\nNombre: %s",product->nombreAlimento);
            printf("\n Tipo: %s",product->tipoAlimento);*/
            printf("\n Precio: $%.2f",product->precio);
            /*printf("\n Fecha de compra: %02d/%02d/%d",product->diaCompra,product->mesCompra,product->anioCompra);
            printf("\n Fecha caducidad: %02d/%02d/%04d",product->diaCaducicad,product->mesCaducidad,product->anioCaducidad);
            printf("\n Disponibilidad: %d\n", product->disponibilidad);*/
            printf("\n ID: %d",aux->identificador);
            aux = aux->sig;
        }
    }
    else
        printf("\nLista vacia\n");
}

Nodo* buscaElemento(ListaD *lista, Nodo *elemento){
    Nodo* aux = lista->cabeza;
    Producto *product;
    if(!lista_vacia(*lista)){
        while(aux->datos->precio != elemento->datos->precio){
            if(aux->sig !=NULL){
                aux=aux->sig;
            }
            else{
                printf("\nEl elemento con Precio = %f no se encuentra en la lista\n",elemento->datos->precio);
                aux=NULL;
                return(aux);
                break;
            }
        
        }
        if(aux->datos->precio == elemento->datos->precio){
            printf("\nEl elemento con precio = %f si esta en la lista\n",elemento->datos->precio);
            return(aux);
        }
    }
    else{
        printf("\n EL ELEMENTO NO SE ENCUENTRA LA LISTA NO TIENE NADA \n");
        return(NULL);
    }
    return(aux);
}
