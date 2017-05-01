/*Natalia Isabel Hernandez Naveros
28-04-2017
Estructura de datos II
Proyecto I */
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo*)malloc(sizeof(Nodo))
#define reservar_memoria2 (Nodo2*)malloc(sizeof(Nodo2))
//Estructuras
typedef struct Nodo{
    int dato;
    Nodo *siguiente;
}Nodo;

typedef struct Nodo2{
    int dato2;
    Nodo2 *siguiente2;
    Nodo2 *anterior2;
}Nodo2;
//Variables Globales
Nodo *primero = NULL;
Nodo *ultimo = NULL;
Nodo2 *primero2=NULL;
Nodo2 *ultimo2=NULL;
//Funciones de los menus
void menu();
void menu_Lifo();
void menu_Fifo();
void menu_ListasCirlularesSimples();
void menu_ListasCirlularesDobles();
void menu_ListasSimples();
void menu_ListasDobles();
//Funciones
void insertarNodo();
void imprimir();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void vaciar();
void insertarNodoPila();
void insertarNodoLDC();
void mostrarListaPU();
void mostrarListaUP();
void mostrarListaDPU();
void mostrarListaDUP();
void insertarNodoSC();
void mostrarListaSC();
void buscarNodoSC();
void modificarNodoSD();
void eliminarNodoSD();
void buscarNodoLDC();
void modificarNodoLDC();
void eliminarNodoLDC();
void insertarNodoLD();
void buscarNodoLD();
void modificarNodoLD();
void eliminarNodoLD();
void vaciarLista();

/*Para usar listas circulares y listas dobles
se debe vaciar las listas simples, la pila y 
la cola para no tener falla del programa*/

int main() {

	menu();
	return 0;
}
void menu(){
	int opcion=0;
	do{
		printf("\n*****\tMenu Principal\t*****\n");
		printf("\n1. Menu=Fifo\n");
		printf("2. Menu=Lifo\n");
		printf("3. Menu=Listas  Circulares Simples\n");
		printf("4. Menu=Listas Circulares Dobles\n");
		printf("5. Menu=Listas Simples\n");
		printf("6. Menu=Listas Dobles\n");
		printf("0.Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 0:
				printf("\n\nPrograma finalizado con exito\n");
				exit(0);
			break;
			case 1:
				menu_Fifo();
			break;
			case 2:
				menu_Lifo();
			break;
			case 3:
				menu_ListasCirlularesSimples();
			break;
			case 4:
				menu_ListasCirlularesDobles();
			break;
			case 5:
				menu_ListasSimples();
			break;
			case 6:
				menu_ListasDobles();
			break;
		}
		printf("\n");
        system("pause");
        system("cls");
	}while(opcion!=0);
}
void menu_Fifo(){

	int opc = 0;
    do{
        printf("\n****\tColas\t****");
        printf("\n1.Insertar en la cola");
        printf("\n2.Buscar en la cola");
        printf("\n3.Editar en la cola");
        printf("\n4.Borrar en la cola");
        printf("\n5.Mostrar cola");
        printf("\n6.Vaciar cola");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo\n");
                insertarNodo();
                break;
            case 2:
                printf("\n\nBuscar nodo\n");
                buscarNodo();
                break;
            case 3:
                printf("\n\nEditar nodo\n");
                modificarNodo();
                break;
            case 4:
                printf("\n\nBorrar nodo\n");
                eliminarNodo();
                break;
            case 5:
                printf("\n\nImprimir cola\n\n");
                imprimir();
                break;
            case 6:
                vaciar();
                break;
            case 0:
                menu();
                break;
            default:
               printf("\n\nOpcion no valida\n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc!=0);
}
void menu_Lifo(){
	free(0);
	int opc=0;
    do{
        printf("\n****\tPilas\t****");
        printf("\n1.Insertar en la pila");
        printf("\n2.Buscar en la pila");
        printf("\n3.Editar en la pila");
        printf("\n4.Borrar en la pila");
        printf("\n5.Mostrar pila");
        printf("\n6.Vaciar pila");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo en la pila \n");
                insertarNodoPila();
                break;
            case 2:
                printf("\n\nBusacar nodo en la pila \n");
                buscarNodo();
                break;
            case 3:
                printf("\n\nEditar nodo en la pila \n");
                modificarNodo();
                break;
            case 4:
                printf("\n\nBorrar nodo en la pila \n");
                eliminarNodo();
                break;
            case 5:
                printf("\n\nMostrar pila \n\n");
                imprimir();
                break;
           case 6:
                vaciar();
                break;
            case 0:
                menu();
                break;
            default:

               printf("\n\nOpcion no valida \n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc!=0);
}
void menu_ListasCirlularesSimples(){
	int opc=0;
    do{
       	printf("\n****\tLista Simple Circular\t****");
        printf("\n1.Insertar");
        printf("\n2.Buscar");
        printf("\n3.Editar");
        printf("\n4.Borrar");
        printf("\n5.Mostrar");
        printf("\n6.Vaciar");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo\n");
                insertarNodoSC();
                break;
            case 2:
                printf("\n\nBuscar nodo\n");
                buscarNodoSC();
                break;
            case 3:
                printf("\n\nEditar nodo\n");
                modificarNodoSD();
                break;
            case 4:
                printf("\n\nBorrar Nodo\n");
                eliminarNodoSD();
                break;
            case 5:
                printf("\n\nMostar lista\n\n");
                mostrarListaSC();
                break;
            case 6:
                vaciarLista();
            	//No esta en funcion
                break;
            case 0:
                menu();
                break;
            default:
               printf("\n\nOpcion no valida\n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc != 0);

}

void menu_ListasCirlularesDobles(){
	int opc=0;
    do{
        printf("\n****\tLista Circular Dobles\t****");
        printf("\n1.Insertar");
        printf("\n2.Buscar");
        printf("\n3.Editar");
        printf("\n4.Borrar");
        printf("\n5.Mostrar(PU)");
        printf("\n6.Mostrar(UP)");
        printf("\n7.Vaciar");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo\n");
                insertarNodoLDC();
                break;
            case 2:
                printf("\n\nBuscar nodo\n");
                buscarNodoLDC();
                break;
            case 3:
                printf("\n\nEditar nodo\n");
                modificarNodoLDC();
                break;
            case 4:
                printf("\n\nBorrar nodo\n");
                eliminarNodoLDC();
                break;
            case 5:
                printf("\n\nMostrar lista PU \n\n");
                mostrarListaPU();
                break;
            case 6:
                printf("\n\nMostrar lista UP \n\n");
                mostrarListaUP();
                break;
            case 7:
                vaciarLista();
            	//No esta en funcion;
                break;
            case 0:
                menu();
                break;
            default:

               printf("\n\nOpcion no valida \n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc!=0);

}
void menu_ListasSimples(){
	 int opc=0;
    do{
        printf("\n****\tLista Simple\t****");
        printf("\n1.Insertar");
        printf("\n2.Buscar");
        printf("\n3.Editar");
        printf("\n4.Borrar");
        printf("\n5.Mostrar");
        printf("\n7.Vaciar");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");

        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo\n");
                insertarNodo();
                break;
            case 2:
                printf("\n\nBuscar nodo\n");
                buscarNodo();
                break;
            case 3:
                printf("\n\nEditar nodo\n");
                modificarNodo();
                break;
            case 4:
                printf("\n\nBorrar nodo\n");
                eliminarNodo();
                break;
            case 5:
                printf("\n\nMostrar lista\n\n");
                imprimir();
                break;
            case 6:
                vaciar();
            	break;
            case 0:
                menu();
                break;
            default:
               printf("\n\nOpcion no valida\n\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }while(opc != 0);
}
void menu_ListasDobles(){
	int opc = 0;
    do{
        printf("\n****\tLista Dobles\t****");
        printf("\n1.Insertar");
        printf("\n2.Buscar");
        printf("\n3.Editar");
        printf("\n4.Borrar");
        printf("\n5.Mostrar(PU)");
        printf("\n6.Mostrar(UP)");
        printf("\n7.Vaciar");
        printf("\n0.Menu Principal");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\nInsertar nodo\n");
                insertarNodoLD();
                break;
            case 2:
                printf("\n\nBuscar nodo\n");
                buscarNodoLD();
                break;
            case 3:
                printf("\n\nEditar nodo\n");
                modificarNodoLD();
                break;
            case 4:
                printf("\n\nBorrar nodo\n");
                eliminarNodoLD();
                break;
            case 5:
                printf("\n\nMostrar lista PU \n\n");
                mostrarListaDPU();
                break;
            case 6:
                printf("\n\nMostrar lista UP \n\n");
                mostrarListaDUP();
                break;
            case 7:
                vaciarLista();
            	//No esta en funcion
                break;
            case 0:
                menu();
                break;
            default:
               printf("\n\nOpcion no valida\n\n");
        }
    }while(opc!=0);
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
void imprimir(){
	Nodo *aux=reservar_memoria;
    aux=primero;
    if(primero!=NULL){
        while(aux!=NULL){
            printf("\n %d",aux->dato);
            aux=aux->siguiente;
        }
    }else{
        printf("\n\nVacio");
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
                printf("\nEl dato ( %d ) fue encontrado\n", buscar);
                encontrado=1;
            }
            aux=aux->siguiente;
        }
        if(encontrado==0){
            printf("\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\nVacio\n");
    }

}
void modificarNodo(){
	Nodo *aux=reservar_memoria;
    aux=primero;
    int buscar=0,encontrado=0;
    printf("\nIngrese el dato a modificar: ");
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
            printf("\nEl dato no fue encontrado\n");
        }
    }else{
        printf("\nVacio\n");
    }
}
void eliminarNodo(){
	Nodo *aux=reservar_memoria;
    aux=primero;
    Nodo *anterior=reservar_memoria;
    anterior=NULL;
    int buscar=0, encontrado=0;
    printf("\nIngrese el dato a eliminar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        while(aux!=NULL && encontrado!=1){
            if(aux->dato==buscar){
                if(aux==primero){
                    primero=primero->siguiente;
                }else{
                    anterior->siguiente=aux->siguiente;
                }
                printf("\nDato eliminado\n");
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
        printf("\nVacio\n");
    }
}
void vaciar(){
    Nodo *aux;
    while(primero!=NULL){
        aux=primero;
        primero=aux->siguiente;
        free(aux);
    }
    printf("\nVaciar con exito\n");
}
void insertarNodoPila(){
    Nodo* aux=reservar_memoria;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux->dato);
    aux->siguiente=primero;
    primero=aux;
}


void insertarNodoSC(){
    Nodo *aux=reservar_memoria;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux->dato);
    if(primero==NULL){
        primero=aux;
        primero->siguiente=primero;
        ultimo=primero;
    }else{
        ultimo->siguiente=aux;
        aux->siguiente=primero;
        ultimo=aux;
    }
    printf("\nDato ingresado con exito\n");
}
void mostrarListaSC(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    if(primero!=NULL){
        do{
            printf("\n %d",aux->dato);
            aux=aux->siguiente;
        }while(aux != primero);
    }else{
        printf("\n\nLista vacia");
    }
}
void buscarNodoSC(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        do{
            if(aux->dato==buscar){
                printf("\n\nEl dato ( %d ) fue encontrado\n", buscar);
                encontrado = 1;
            }
            aux=aux->siguiente;
        }while(aux!=primero && encontrado!=1);
        if(encontrado == 0){
            printf("\n\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void modificarNodoSD(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a modificar: ");
    scanf("%d", &buscar);
    if(primero!=NULL){
        do{
            if(aux->dato==buscar){
                printf("\n\nEl dato ( %d ) fue encontrado\n", buscar);
                printf("\nIngrese nuevo dato: ");
                scanf("%d", &aux->dato);
                printf("\nDato modificado\n");
                encontrado=1;
            }
            aux=aux->siguiente;
        }while(aux!=primero && encontrado!=1);
        if(encontrado==0){
            printf("\n\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\n\nLA LISTA SIMPLE CIRCULAR SE ENCUENTRA VACIA");
    }
}

void eliminarNodoSD(){
    Nodo *aux=reservar_memoria;
    aux=primero;
    Nodo *anterior=reservar_memoria;
    anterior=NULL;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a eliminar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        do{
            if(aux->dato==buscar){
                if(aux==primero){
                    primero=primero->siguiente;
                    ultimo->siguiente=primero;
                }else if(aux==ultimo){
                    anterior->siguiente=primero;
                    ultimo=anterior;
                }else{
                    anterior->siguiente=aux->siguiente;
                }
                printf("\nEl dato borrado con exito\n");
                encontrado=1;
            }
            anterior=aux;
            aux=aux->siguiente;
        }while(aux!=primero && encontrado!=1);
        if(encontrado==0){
            printf("\n\nDato no encontrado\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n\nLista vacia");
    }
}
void insertarNodoLDC(){
	Nodo2* aux=reservar_memoria2;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux->dato2);
    if(primero2==NULL){
        primero2=aux;
        primero2->siguiente2=primero2;
        ultimo2=primero2;
        primero2->anterior2=ultimo2;
    }else{
        ultimo2->siguiente2=aux;
        aux->siguiente2=primero2;
        aux->anterior2=ultimo2;
        ultimo2=aux;
        primero2->anterior2=ultimo2;
    }
    printf("\nDato ingresado con exito\n");
}
void buscarNodoLDC(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a buscar: ");
    scanf("%d",&buscar);
    if(primero2!=NULL){
        do{
            if(aux->dato2==buscar){
                printf("\n\nEl dato ( %d ) fue encontrado\n", buscar);
                encontrado=1;
            }
            aux=aux->siguiente2;
        }while(aux!=primero2 && encontrado!=1);
        if(encontrado==0){
            printf("\n\nEl  dato no ha sido encontrado\n");
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void modificarNodoLDC(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a modificar: ");
    scanf("%d",&buscar);
    if(primero2!=NULL){
        do{
            if(aux->dato2==buscar){
                printf("\n\nEl dato ( %d ) fue encontrado\n", buscar);
                printf("\nIngrese el nuevo dato: ");
                scanf("%d",&aux->dato2);
                printf("\nDato modificado\n");
                encontrado=1;
            }
            aux=aux->siguiente2;
        }while(aux!=primero2 && encontrado!=1);
        if(encontrado==0){
            printf("\n\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void eliminarNodoLDC(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    Nodo2 *anterior1=reservar_memoria2;
    anterior1=NULL;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a eliminar: ");
    scanf("%d", &buscar);
    if(primero2!=NULL){
        do{
            if(aux->dato2==buscar){
                if(aux==primero2){
                    primero2=primero2->siguiente2;
                    primero2->anterior2=ultimo2;
                    ultimo2->siguiente2=primero2;
                }else if(aux==ultimo2){
                    ultimo2=anterior1;
                    ultimo2->siguiente2=primero2;
                    primero2->anterior2=ultimo2;
                }else{
                    anterior1->siguiente2=aux->siguiente2;
                    aux->siguiente2->anterior2=anterior1;
                }
                printf("\nDato borrado con exito\n");
                encontrado=1;
            }
            anterior1=aux;
            aux=aux->siguiente2;
        }while(aux!=primero2 && encontrado!=1);
        if(encontrado==0){
            printf("\n\nEl dato no ha sido encontrado\n");
        }else{
            free(anterior1);
        }
    }else{
        printf("\n\nLista vacia");
    }
}
void mostrarListaPU(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    if(primero2!=NULL){
        do{
            printf("\n %d", aux->dato2);
            aux=aux->siguiente2;
        }while(aux!=primero2);
    }else{
        printf("\n\nLista vacia");
    }
}

void mostrarListaUP(){
    Nodo2 *aux=reservar_memoria2;
    aux=ultimo2;
    if(primero2!=NULL){
        do{
            printf("\n %d",aux->dato2);
            aux=aux->anterior2;
        }while(aux!=ultimo2);
    }else{
        printf("\n\nLista vacia");
    }
}
void insertarNodoLD(){
    Nodo2 *aux=reservar_memoria2;
    printf("\n\nIngresar dato: ");
    scanf("%d",&aux->dato2);
    if(primero2==NULL){
        primero2=aux;
        primero2->siguiente2=NULL;
        primero2->anterior2=NULL;
        ultimo2=primero2;
    }else{
        ultimo2->siguiente2=aux;
        aux->siguiente2=NULL;
        aux->anterior2=ultimo2;
        ultimo2=aux;
    }
    printf("\nDato ingresado con exito\n");

}
void buscarNodoLD(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    int buscar=0, encontrado=0;
    printf("\nIngrese a buscar: ");
    scanf("%d", &buscar);
    if(primero!=NULL){
        while(aux!=NULL && encontrado!=1){
            if(aux->dato2==buscar){
                printf("\nEl dato ( %d ) fue encontrado\n", buscar);
                encontrado=1;
            }
            aux=aux->siguiente2;
        }
        if(encontrado==0){
            printf("\nEl dato no ha sido encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void modificarNodoLD(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a modificar: ");
    scanf("%d",&buscar);
    if(primero!=NULL){
        while(aux!=NULL){
            if(aux->dato2==buscar){
                printf("\nEl dato ( %d ) fue encontrado", buscar);
                printf("\nIngrese el nuevo dato: ");
                scanf("%d",&aux->dato2);
                printf("\nDato modificado\n");
                encontrado=1;
            }
            aux=aux->siguiente2;
        }
        if(encontrado == 0){
            printf("\nEl dato noo fue encontrado\n");
        }
    }else{
        printf("\nLista vacia\n");
    }
}

void eliminarNodoLD(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    Nodo2 *anterior1=reservar_memoria2;
    anterior1=NULL;
    int buscar=0, encontrado=0;
    printf("\nIngrese dato a eliminar: ");
    scanf("%d",&buscar);
    if(primero2!=NULL){
        while(aux!=NULL && encontrado!=1){
            if(aux->dato2==buscar){
                if(aux==primero2){
                    primero2=primero2->siguiente2;
                    primero2->anterior2=NULL;
                }else if(aux==ultimo2){
                    anterior1->siguiente2=NULL;
                    ultimo2=anterior1;
                }else{
                    anterior1->siguiente2=aux->siguiente2;
                    aux->siguiente2->anterior2=anterior1;
                }
                printf("\nDato borrado\n");
                encontrado=1;
            }
            anterior1=aux;
            aux=aux->siguiente2;
        }
        if(encontrado==0){
            printf("\nEl dato no fue encontrado\n");
        }else{
            free(anterior1);
        }
    }else{
        printf("\nLista vacia\n");
    }
}


void mostrarListaDPU(){
    Nodo2 *aux=reservar_memoria2;
    aux=primero2;
    if(primero2!=NULL){
        while(aux!=NULL){
            printf("\n %d",aux->dato2);
            aux=aux->siguiente2;
        }
    }else{
        printf("\n\nLista vacia");
    }
}

void mostrarListaDUP(){
    Nodo2 *aux=reservar_memoria2;
    aux=ultimo2;
    if(primero2!=NULL){
        while(aux!=NULL){
            printf("\n %d", aux->dato2);
            aux=aux->anterior2;
        }
    }else{
        printf("\n\nLista vacia");
    }
}
void vaciarLista(){
	exit(0);
}
