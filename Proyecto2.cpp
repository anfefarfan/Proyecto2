#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};	

int pos;
clock_t t_ini, t_fin;
double secs;

nodo *inicial = NULL;
nodo *fin = NULL;
nodo * pila = NULL;
nodo *nodito;

FILE *proyecto;
//////////////////Funciones Generales//////////////////

void menu();
int pedir_datos();
int pedir_datos_buscar();
int pedir_datos_modificar();

void generar_datos(nodo *&, nodo *&);
void ordenar_datos_burbuja_cola(nodo *);
void ordenar_datos_burbuja_pila(nodo *);
void imprimir_datos(nodo *);
void generar_datos_pila(nodo *&);

void inicio_reloj();
void fin_reloj();

///////////////////Funciones Colas////////////////////////////

bool cola_vacia(nodo *);
void cola_insertar_nodo(nodo *&,nodo *&, int);
void cola_mostrar(nodo *);
void cola_buscar(nodo *,int);
void cola_modificar_nodo(nodo *&, int);
void cola_eliminar_nodo(nodo *&);
void cola_eliminar_completa(nodo *&,nodo *& );

//////////////////////Funciones Pilas////////////////////////////

void insertar_elemento(int, nodo *&);
void editar_elemento(nodo *&, int);
void eliminar_elemento(nodo *&);
void eliminar_pila(nodo *&);
void listar_elementos(nodo *);
void buscar_elementos(nodo *, int);
bool pila_vacia(nodo *);

/////////////////////////////Funciones De Archivos////////////////////

void insertar_archivos_cola();
void visualizar_archivos();

void insertar_archivos_pila();


int main(int argc, char *argv[]) {
	
	/*
	
	int var,p;
	//var=pedir_datos();
	printf("Digite el primer valor:");
	scanf("%d",&p);
	
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\nDigite el segundo valor valor:");
	scanf("%d",&p);
	
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\nDigite el tercer valor valor:");
	scanf("%d",&p);
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\n");
	
	generar_datos(inicial,fin);
	
	cola_mostrar(inicial);
	
	//ordenar_datos(inicial);
	printf("\n");
	
	cola_mostrar(inicial);
	
	cola_eliminar_nodo(inicial);
	
	printf("\n");
	
	cola_mostrar(inicial);
	while(inicial!=NULL){
		
		cola_eliminar_completa(inicial,fin,p);
		
	}
	printf("\n");
	cola_mostrar(inicial);
	
	*/
	//clock_t t_ini, t_fin;
	//double secs;
	
	//t_ini = clock();
	/* ...hacer algo... */
	
	/*
	
	int var,p;
	//var=pedir_datos();
	printf("Digite el primer valor:");
	scanf("%d",&p);
	
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\nDigite el segundo valor valor:");
	scanf("%d",&p);
	
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\nDigite el tercer valor valor:");
	scanf("%d",&p);
	cola_insertar_nodo(inicial,fin,p);
	
	printf("\n");
	
	generar_datos(inicial,fin);
	
	cola_mostrar(inicial);
	
	//ordenar_datos(inicial);
	printf("\n");
	
	cola_mostrar(inicial);
	
	cola_eliminar_nodo(inicial);
	
	printf("\n");
	
	cola_mostrar(inicial);
	printf("\n");
	cola_buscar(inicial,pedir_datos_buscar());
	printf("\n");
	cola_modificar_nodo(inicial,pedir_datos_modificar());
	while(inicial!=NULL){
		
		cola_eliminar_completa(inicial,fin,p);
		
	}
	printf("\n");
	cola_mostrar(inicial);
	printf("\n");
	
	
//	t_fin = clock();
	
//	secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
//	printf("%.16g milisegundos\n", secs * 1000.0);
//	printf("%.16g segundos\n", secs * 1.0);
	
	*/
	menu();
	return 0;
	
}


void menu(){
	int opcion,dato;
	do{
		printf("|**************************************************************|\n");
		printf("|----------------- * Gestion de Pilas y Colas *- --------------|\n");
		printf("|**************************************************************|\n");
		printf("| 1.Gestionar Pila                                             |\n");
		printf("| 2.Gestionar Cola                                             |\n");
		printf("| 3.Gestionar Archivos                                         |\n");
		printf("|                                                              |\n");
		printf("| 0.Salir                                                      |\n");
		printf("|**************************************************************|\n");
		printf("Ingrese una opcion:");
		scanf("%d", &opcion);
		//system("pause");
		system("cls");
		switch(opcion){
		case 1: {
			printf("-Gestionar Pilas\n");
			
			int opcion1;
			do{
				printf("|******************************************************|\n");
				printf("|----------------- * Gestion de Pilas *- --------------|\n");
				printf("|******************************************************|\n");
				printf("| 1.Insetar Pila                                       |\n");
				printf("| 2.Mostrar pila                                       |\n");
				printf("| 3.Eliminar dato de la pila                           |\n");
				printf("| 4.Buscar dato de la pila                             |\n");
				printf("| 5.Modificar dato de la pila                          |\n");
				printf("| 6.Eliminar pila                                      |\n");
			    printf("| 7.Generar archivos                                   |\n");
				printf("| 8.Ordenar Pila                                       |\n");
				printf("| 0.Salir                                              |\n");
				printf("|******************************************************|\n");
				printf("Ingrese una opcion:");
				scanf("%d", &opcion1);
				switch(opcion1){
					
				case 1:{
					
					printf("-Insertar Pila\n");
					
					inicio_reloj();
				    insertar_elemento(pedir_datos(), pila);
			        fin_reloj();
					break;
				}
				case 2:{
				      printf("-Mostrar Pila\n");
			
			        inicio_reloj();
                    listar_elementos(pila);
					fin_reloj();
					  break;
				}
				case 3:{
					printf("-Eliminar Dato de la Pila\n");
					
					inicio_reloj();
					eliminar_elemento(pila);
					fin_reloj();
					break;
				}
				case 4:{
					printf("-Buscar Dato de la Pila\n");
					
					inicio_reloj();
					buscar_elementos(pila, pedir_datos_buscar());
					fin_reloj();
					
					break;
				}
				case 5:{
					printf("-Modificar dato de la Pila\n");
					inicio_reloj();
					listar_elementos(pila);
					editar_elemento(pila,pedir_datos_modificar());
					fin_reloj();
					
					break;
				}
				case 6:{
					printf("-Eliminar Pila completa\n");
					inicio_reloj();
					eliminar_pila(pila);
					fin_reloj();
					
					break;
				}
				case 7:{
						printf("-Generar archivos\n");
						inicio_reloj();
						insertar_archivos_pila();
						fin_reloj();
						
						break;
					}
				case 8:{
							printf("-Ordenar pila \n");
							inicio_reloj();
							ordenar_datos_burbuja_pila(pila);
							fin_reloj();
							
							break;
						}
				case 0:{
					printf("-SALIR\n");
					break;
				}
				default:{
					printf("-Error\n");
					break;
				}
				}
				system("pause");
				system("cls");
			}while(opcion1 != 0);
		     break;
		
		
		case 2:{
			printf("- Gestionar Colas\n");
			
			int opcion2;
			do{
				printf("|******************************************************|\n");
				printf("|----------------- * Gestion de Colas *- --------------|\n");
				printf("|******************************************************|\n");
				printf("| 1.Insetar Cola                                       |\n");
				printf("| 2.Mostrar Cola                                       |\n");
				printf("| 3.Eliminar dato de la Cola                           |\n");
				printf("| 4.Buscar dato de la Cola                             |\n");
				printf("| 5.Modificar dato de la Cola                          |\n");
				printf("| 6.Eliminar Cola                                      |\n");
				printf("| 7.Ordenar Cola                                       |\n");
				printf("| 8.Generar archivo                                    |\n");
				printf("| 0.Salir                                              |\n");
				printf("|******************************************************|\n");
				printf("Ingrese una opcion:");
				scanf("%d", &opcion2);
				switch(opcion2){
					
				case 1:{
					
					printf("-Insertar cola\n");
					inicio_reloj();
					cola_insertar_nodo(inicial,fin,pedir_datos());
					fin_reloj();
					break;
				}
				case 2:{
					printf("-Mostrar cola\n");
					inicio_reloj();
					cola_mostrar(inicial);
					fin_reloj();
					break;
					}
				case 3:{
					printf("-Eliminar Dato de la cola\n");
					inicio_reloj();
					cola_eliminar_nodo(inicial);
					fin_reloj();
					break;
						}
				case 4:{
					printf("-Buscar Dato de la cola\n");
					inicio_reloj();
					cola_buscar(inicial,pedir_datos_buscar());
					fin_reloj();
					break;
						}
				case 5:{
					printf("-Modificar dato de la cola\n");
					inicio_reloj();
					cola_modificar_nodo(inicial,pedir_datos_modificar());
					fin_reloj();
					break;
						}
				case 6:{
					printf("-Eliminar cola completa\n");
					inicio_reloj();
					cola_eliminar_completa(inicial,fin);
					fin_reloj();
					break;
					}
				case 7:{
						printf("-Ordenar Cola\n");
						inicio_reloj();
						ordenar_datos_burbuja_cola(inicial);
						fin_reloj();
						break;
					}
				case 8:{
							printf("-Generar archivo\n");
							inicio_reloj();
							insertar_archivos_cola();
							fin_reloj();
							break;
						}
				case 0:{
					printf("-SALIR\n");
					break;
					}
				default:{
					printf("-Error\n");
					break;
					}
				}
				system("pause");
				system("cls");
			}while(opcion2 != 0);
			break;
		} 
		
		
		case 3: {
				printf("------------------------------------\n");
				break;
			}
		
		
	
		case 0: exit(0);
		break;
		default: printf("\nNo es una opcion valida, intentelo de nuevo\n");
		break;
		}
		
	}
		system("pause");
		system("cls");
	
	}while(opcion != 0);
}


int pedir_datos(){
	int dato;
	printf("Ingrese el dato a insertar\n");
	scanf("%d", &dato);
	return dato;
}

int pedir_datos_buscar(){
	int dato;
	printf("Ingrese el dato a buscar\n");
	scanf("%d", &dato);
	return dato;
}

int pedir_datos_modificar(){
	int dato;
	printf("Ingrese el dato a modificar\n");
	scanf("%d", &dato);
	return dato;
}

void generar_datos(nodo *&inicial, nodo *&fin){
	int cant, i, aleatorio;
	printf("Ingrese la cantidad de datos a generar\n");
	scanf("%d", &cant);
	srand(time(NULL));
	for(i = 1; i <= cant; i++){
		aleatorio = (rand() % (1999999 + 1)- 1000000);
		cola_insertar_nodo(inicial,fin,aleatorio);
	}
}

void generar_datos_pila(nodo *&pila){
	int cant, i, aleatorio;
	printf("Ingrese la cantidad de datos a generar\n");
	scanf("%d", &cant);
	srand(time(NULL));
	for(i = 1; i <= cant; i++){
		aleatorio = (rand() % (1999999 + 1)- 1000000);
		//cola_insertar_nodo(inicial,fin,aleatorio);
		insertar_elemento(aleatorio, pila);
	}
}

void ordenar_datos_burbuja_cola(nodo *inicial){
	int aux;
	nodo * x = inicial;
	nodo * y = NULL;
	if(inicial == NULL){
		printf("solo un dato\n");
	}else{
		while(x != NULL){
			y = x -> siguiente;
			while(y != NULL){
				if(x -> dato > y -> dato){
					aux = x -> dato;
					x -> dato = y -> dato;
					y -> dato = aux;
				}
				y = y -> siguiente;
			}
			x = x -> siguiente;
		}
	}
}

void imprimir_datos(nodo *inicial){
	nodo * aux = inicial;
	if(inicial == NULL){
		printf("Esta vacio\n");
	}else{
		while(aux != NULL){
			printf("%d ", aux -> dato);
			aux = aux -> siguiente;
		}
	}
}
void inicio_reloj(){
	
	t_ini = clock();
	
}

void fin_reloj(){
	
	t_fin = clock();
	
	secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	printf("%.16g milisegundos\n", secs * 1000.0);
	printf("%.16g segundos\n", secs * 1.0);
	
}

////////////////////////Funciones De colas//////////////////////////////

bool cola_vacia(nodo *inicial){
	
	return (inicial == NULL)? true:false;
}

void cola_insertar_nodo(nodo *&inicial,nodo *&fin,int n){
	
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato=n;
	nuevo->siguiente=NULL;
	if(cola_vacia(inicial)){
		inicial=nuevo;
	}else{
		fin->siguiente=nuevo;
	}
	fin = nuevo;
	
	printf("Dato %d fue insertado\n",n);
}

void cola_mostrar(nodo *inicial){
	
	nodo * aux = inicial;
	if(cola_vacia(inicial)){
		printf("Esta vacio\n");
	}else{
		while(aux != NULL){
			printf("%d \n", aux -> dato);
			aux = aux -> siguiente;
		}
	}
	
}

void cola_buscar(nodo *colas,int dato){
	
	nodo *aux = colas;
	int cont=0;
	if(cola_vacia(inicial)){
		printf("Cola esta Vacia");
	}else{
		
		while(aux!=NULL){
			
			if(aux->dato==dato){
				
				cont+=1;
				break;
			}
			aux = aux->siguiente;
		}
		if(cont==0){
			printf(":no se encontro el dato\n");
		}else{
			printf("dato encontrado\n");
		}
		
	}
	
}

void cola_modificar_nodo(nodo *&colas, int dato){
	
	nodo *aux = colas;
	int cont=0,nuevodato;
	if(cola_vacia(inicial)){
		printf("Cola esta Vacia");
	}else{
		
		while(aux!=NULL){
			
			if(aux->dato==dato){
				int h;
				printf("Ingrese el dato nuevo: ");
				scanf("%d",&h);
				nuevodato=h;
				cont+=1;
				aux->dato=nuevodato;
				break;
			}
			aux = aux->siguiente;
		}
		if(cont == 0){
			printf("no se encontro el dato a modificar\n");
		}else{
			printf("el dato fue modificado\n");
			//listar_elementos(pilita);
			cola_mostrar(colas);
		}
		
	}
	
	
}


void cola_eliminar_nodo(nodo *&inicial){
	
	nodo *aux = inicial;
	if(cola_vacia(inicial)){
		printf("Cola esta Vacia");
	}else{
		
		inicial=aux->siguiente;
		free(aux);
	}
	
}
void cola_eliminar_completa(nodo *&inicial,nodo *&fin){
	
	//n=inicial->dato;
	nodo *aux = inicial;
	if(inicial==fin){
		inicial = NULL;
		fin = NULL;
	}else{
		while(inicial != NULL){
			inicial = inicial->siguiente;
			free(aux);
		}
		
		
		
	}
	
	
}


/*
if(inicial==NULL){
inicial=nuevo;
inicial->siguiente=NULL;
final=nuevo;
}else{

final->siguiente=nuevo;
nuevo->siguiente=NULL;
final=nuevo;
}

void ordenar_datos_burbuja_pila(nodo *pilita){
int aux;
nodo * x = pilita;
nodo * y = NULL;
if(pilita == NULL){
printf("ya estaba ordenado\n");
}else{
while(x != NULL){
y = x -> siguiente;
while(y != NULL){
if(x -> dato > y -> dato){
aux = x -> dato;
x -> dato = y -> dato;
y -> dato = aux;
}
y = y -> siguiente;
}
x = x -> siguiente;
}
}

}
*/

////////////////////////Funciones De pilas//////////////////////////////

void insertar_elemento(int n, nodo *&pilita){
	nodo * nuevo_nodo = (nodo*)malloc(sizeof(nodo));
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pilita;
	pilita = nuevo_nodo;
	printf("Dato %d insertado correctamente\n", n);
}

void editar_elemento(nodo *&pilita, int dato){
	nodo *aux = pilita;
	int contador = 0, nuevo_dato;
	if(pila_vacia(pilita)){
		printf("Pila vacia\n");
	}else{
		while(aux != NULL){
			if(aux->dato == dato){
				
				
				nuevo_dato = pedir_datos();
				contador += 1;
				aux->dato = nuevo_dato;
				break;
			}
			aux = aux->siguiente;
		}
		if(contador == 0){
			printf("no se encontro el dato\n");
		}else{
			printf("el dato fue modificado\n");
			listar_elementos(pilita);
		}
	}
}
void eliminar_elemento(nodo *&pilita){
	nodo *aux = pilita;
	if(pila_vacia(pilita)){
		printf("Pila vacia\n");
	}else{
		pilita = aux->siguiente;
		free(aux);
	}
}
void eliminar_pila(nodo *&pilita){
	if(pila_vacia(pilita)){
		printf("Pila vacia\n");
	}else{
		while(pilita != NULL){
			nodo *aux = pilita;
			pilita = aux->siguiente;
			free(aux);
		}
	}
}
void listar_elementos(nodo *pilita){
	nodo *aux = pilita;
	if(pila_vacia(pilita)){
		printf("La pila esta vacia\n");
	}else{
		while(aux != NULL){
			printf("%d ", aux->dato);
			aux = aux->siguiente;
		}
		printf("\n");
	}
}
void buscar_elementos(nodo *pilita, int dato){
	nodo *aux = pilita;
	int contador = 0;
	if(pila_vacia(pilita)){
		printf("Pila vacia\n");
	}else{
		while(aux != NULL){
			if(aux->dato == dato){
				contador += 1;
				break;
			}
			aux = aux->siguiente;
		}
		if(contador == 0){
			printf("no se encontro el dato\n");
		}else{
			printf("el dato fue encontrado\n");
		}
	}
}
bool pila_vacia(nodo *pilita){
	return (pilita == NULL) ? true:false;
}


////////////////////////Funciones De archivos//////////////////////////////

void insertar_archivos_cola(){
	
	proyecto=fopen("proyectoC2.txt","rb");
	rewind(proyecto);
	fseek(proyecto, ftell(proyecto)-sizeof(*nodito), SEEK_END);
	fread(&nodito, sizeof(*nodito), 1, proyecto);
	rewind(proyecto);
	fclose(proyecto);
	
	generar_datos(inicial,fin);
	
	proyecto=fopen("proyectoC2.txt","ab");
	if(proyecto==NULL)
	{  
		pos=0;
		proyecto=fopen("proyectoC2.txt","w+b");
	}
	//cola_insertar_nodo(inicial,fin,pedir_datos());
	pos++;
	fwrite(&nodito,sizeof(*nodito),1,proyecto);
	rewind(proyecto);
	fclose(proyecto);
	//system("CLS");
	//break;
}

void insertar_archivos_pila(){
	
	proyecto=fopen("proyectoC2.txt","rb");
	rewind(proyecto);
	fseek(proyecto, ftell(proyecto)-sizeof(*nodito), SEEK_END);
	fread(&nodito, sizeof(*nodito), 1, proyecto);
	rewind(proyecto);
	fclose(proyecto);
	
	generar_datos_pila(pila);
	
	proyecto=fopen("proyectoC2.txt","ab");
	if(proyecto==NULL)
	{  
		pos=0;
		proyecto=fopen("proyectoC2.txt","w+b");
	}
	//cola_insertar_nodo(inicial,fin,pedir_datos());
	pos++;
	fwrite(&nodito,sizeof(*nodito),1,proyecto);
	rewind(proyecto);
	fclose(proyecto);
	//system("CLS");
	//break;
}


void visualizar_archivos(){
	
	int band;
	
	proyecto=fopen("proyectoC2.txt","rb+");
	rewind(proyecto);
	while(fread(&nodito,sizeof(*nodito),1,proyecto))
	{ 
		//for(int i=0;i<=;i++){
			printf("%d",pos);
			cola_mostrar(inicial);
			printf("\n");
		    pos++;
		
		//band++;
	}
	
     //band++;
	fclose(proyecto);
}

void ordenar_datos_burbuja_pila(nodo *pila){
	int aux,y;
	nodo * x = pila;
	
	if(pila == NULL){
		printf("solo un dato\n");
	}else{
		while(x!=NULL){
			y = x->siguiente;
		}
			while(y != NULL){
				if(x -> dato > y -> dato){
					aux = x -> dato;
					x -> dato = y -> dato;
					y -> dato = aux;
				}
				y = y -> siguiente;
			}
			x = x -> siguiente;
		}
	}


