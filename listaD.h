//  Perez Benitez Damian    
//  Carbajal Urquisa Luis Fhernando

//Estruturas
typedef struct Producto{
    char tipoAlimento[12];
    char nombreAlimento[25];
    float precio;
    int anioCompra;
    int mesCompra;
    int diaCompra;
    int anioCaducidad;
    int mesCaducidad;
    int diaCaducicad;
    int disponibilidad;
}Producto;

typedef struct Nodo{
    Producto *datos;
    int identificador;
    struct Nodo *sig;
    struct Nodo *ant;
}Nodo;

typedef struct ListaSimple{
    Nodo *cabeza;
}ListaD;

//Funciones para generar las listas
Producto *agregar_Producto (int TIPO);
Producto *agregar_Producto_temporal(float elemento);
void copiar_Producto(Nodo *aux, Nodo *aux2);
Nodo *crear_Nodo (Producto *producto, int ID);
ListaD *crear_ListaDoble ();

//Funciones para editar las listas
int lista_vacia (ListaD lista);
void insertar_cabeza(ListaD *lista, Nodo *aux);
void insertar_cola(ListaD *lista, Nodo *aux);
void insertar_enmedioD(ListaD *lista, Nodo *despues,Nodo *elemento);
void insertar_enmedioA(ListaD *lista, Nodo *antes,Nodo *elemento);
void quitar_cabeza(ListaD *lista);
void quitar_cola(ListaD *lista);
void quitar_enmedio(ListaD *lista, Nodo *elemento);
void vaciarLista(ListaD *lista);
void printLista(ListaD *lista);
Nodo* buscaElemento(ListaD *lista, Nodo *elemento);

//Funciones de ordenamiento
