#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo*)malloc(sizeof(Nodo))
#define reservar_memoria2 (Nodo2*)malloc(sizeof(Nodo2))

// LISTA SIMPLE ES LO MISMO QUE UNA COLA

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;
}Nodo;

typedef struct Nodo2{
    int dato2;
    struct Nodo2* siguiente2;
}Nodo2;

Nodo* primero = NULL;
Nodo* ultimo = NULL;

Nodo2* primero2 = NULL;
Nodo2* ultimo2 = NULL;

void insertarNodo();
void mostrarLista();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void vaciaLista();

void insertarNodo2();
void mostrarLista2();
void buscarNodo2();
void modificarNodo2();
void eliminarNodo2();
void vaciaLista2();
void mostrarLista3();
int main(){
    int opc=0;
    do{
        printf("\n*****\tConectar listas simples\t*****\n\n");
        printf("1.Insertar\n");
        printf("2.Buscar\n");
        printf("3.Editar\n");
        printf("4.Borrar\n");
        printf("5.Mostrar\n");
        printf("6.Vaciar\n");
        printf("\n\n************************************\n\n");
        printf("7.Insertar\n");
        printf("8.Buscar\n");
        printf("9.Editar\n");
        printf("10.Borrar\n");
        printf("11.Mostrar\n");
        printf("12.Vaciar\n");
        printf("13.Conectar\n");
        printf("0.Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar en la lista 1\n");
                insertarNodo();
                break;
            case 2:
                printf("\n\nBuscar en la lista 1\n");
                buscarNodo();
                break;
            case 3:
                printf("\n\nEditar en la lista 1\n");
                modificarNodo();
                break;
            case 4:
                printf("\n\nBorrar en la lista 1\n");
                eliminarNodo();
                break;
            case 5:
                printf("\n\nMostrar lista 1\n\n");
                mostrarLista();
                break;
            case 6:
                vaciaLista();
                break;
            case 7:
                printf("\n\nInsertar en la lista 2\n");
                insertarNodo2();
                break;
            case 8:
                printf("\n\nBuscar en la lista 2\n");
                buscarNodo2();
                break;
            case 9:
                printf("\n\nEditar en la lista 2\n");
                modificarNodo2();
                break;
            case 10:
                printf("\n\nBorrar en la lista 2\n");
                eliminarNodo2();
                break;
            case 11:
                printf("\n\nMostrar lista 2\n\n");
                mostrarLista2();
                break;
            case 12:
                vaciaLista2();
                break;
            case 13:
                mostrarLista3();
                break;
            case 0:
                printf("\n\nPrograma finalizado con exito\n\n");
                break;
            default:

               printf("\n\nOpcion no valida\n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc!=0);
    return 0;
}
void insertarNodo(){
    Nodo *aux=reservar_memoria;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux->dato);
    if(primero==NULL){
        primero=aux;
        primero->siguiente=NULL;
        ultimo=aux;
    }else{
        ultimo->siguiente=aux;
        aux->siguiente=NULL;
        ultimo=aux;
    }
    printf("\nDato ingresado con exito\n");

}
void mostrarLista(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    if(primero!=NULL){
        while(aux!=NULL){
            printf("\n %d",aux->dato);
            aux=aux->siguiente;
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void buscarNodo(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a buscar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        while(aux!=NULL){
            if(aux->dato==buscar){
                printf("\nEl dato ( %d ) fue encontrado\n",buscar);
                encontrado=1;
            }
            aux=aux->siguiente;
        }
        if(encontrado==0){
            printf("\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void modificarNodo(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a modificar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        while(aux!=NULL){
            if(aux->dato==buscar){
                printf("\nEl dato ( %d ) fue encontrado",buscar);
                printf("\nIngrese el nuevo dato: ");
                scanf("%d",&aux->dato);
                printf("\nDato modificado\n");
                encontrado=1;
            }
            aux=aux->siguiente;
        }
        if(encontrado==0){
            printf("\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void eliminarNodo(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    Nodo *anterior=reservar_memoria;
    anterior=NULL;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a eliminar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        while(aux!=NULL && encontrado!=1){
            if(aux->dato==buscar){
                if(aux==primero){
                    primero=primero->siguiente;
                }else{
                    anterior->siguiente=aux->siguiente;
                }
                printf("\nDato eliminado con exito\n");
                encontrado=1;
            }
            anterior=aux;
            aux=aux->siguiente;
        }
        if(encontrado==0){
            printf("\nDato no encontrado\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void vaciaLista(){
    Nodo *aux;
    while(primero!=NULL){
        aux=primero;
        primero=aux->siguiente;
        free(aux);
    }
    printf("\nLista vaciar con exito\n");
}

void insertarNodo2(){
    Nodo2 *aux2=reservar_memoria2;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux2->dato2);
    if(primero2==NULL){
        primero2=aux2;
        primero2->siguiente2=NULL;
        ultimo2=aux2;
    }else{
        ultimo2->siguiente2=aux2;
        aux2->siguiente2=NULL;
        ultimo2=aux2;
    }
    printf("\nDato ingresado con exitoO\n");

}

void mostrarLista2(){
    Nodo2 *aux2=reservar_memoria2;
    aux2=primero2;
    if(primero2!=NULL){
        while(aux2!=NULL){
            printf("\n %d",aux2->dato2);
            aux2=aux2->siguiente2;
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void buscarNodo2(){
    Nodo2 *aux2=reservar_memoria2;
    aux2=primero2;
    int buscar2=0, encontrado2=0;
    printf("\nIngrese dato a buscar: ");
    scanf("%d",&buscar2);
    if(primero2!=NULL){
        while(aux2!=NULL){
            if(aux2->dato2==buscar2){
                printf("\nEl dato ( %d ) fue encontrado\n",buscar2);
                encontrado2=1;
            }
            aux2=aux2->siguiente2;
        }
        if(encontrado2==0){
            printf("\nDato no encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void modificarNodo2(){
    Nodo2 *aux2=reservar_memoria2;
    aux2=primero2;
    int buscar2=0, encontrado2=0;
    printf("\nIngrese dato a modificar: ");
    scanf("%d",&buscar2);
    if(primero2!=NULL){
        while(aux2!=NULL){
            if(aux2->dato2==buscar2){
                printf("\nEl dato ( %d ) fue encontrado",buscar2);
                printf("\nIngrese nuevo dato: ");
                scanf("%d",&aux2->dato2);
                printf("\nDato modificado\n");
                encontrado2=1;
            }
            aux2=aux2->siguiente2;
        }
        if(encontrado2==0){
            printf("\nDato no encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void eliminarNodo2(){
    Nodo2 *aux2=reservar_memoria2;
    aux2=primero2;
    Nodo2 *anterior2=reservar_memoria2;
    anterior2=NULL;
    int buscar2=0, encontrado2=0;
    printf("\nIngrese dato a eliminar: ");
    scanf("%d",&buscar2);
    if(primero2!=NULL){
        while(aux2!=NULL && encontrado2!=1){
            if(aux2->dato2==buscar2){
                if(aux2==primero2){
                    primero2=primero2->siguiente2;
                }else{
                    anterior2->siguiente2=aux2->siguiente2;
                }
                printf("\nDato eliminado con exito\n");
                encontrado2=1;
            }
            anterior2=aux2;
            aux2=aux2->siguiente2;
        }
        if(encontrado2==0){
            printf("\nDato no encontrado\n");
        }else{
            free(anterior2);
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void vaciaLista2(){
    Nodo2 *aux2;
    while(primero2!=NULL){
        aux2=primero2;
        primero2=aux2->siguiente2;
        free(aux2);
    }
    printf("\nLista vacia con exito\n");
}

void mostrarLista3(){
    Nodo *aux=reservar_memoria;
    Nodo2 *aux2=reservar_memoria2;
    aux=primero;
    aux2=primero2;
    if(primero!=NULL && primero2!=NULL){
        while(aux!=NULL && aux2!=NULL){
            printf("\n %d",(aux->dato)+(aux2->dato2));
            aux=aux->siguiente;
            aux2=aux2->siguiente2;
        }
    }else{
        printf("\n\nListas vacias");
    }
}
