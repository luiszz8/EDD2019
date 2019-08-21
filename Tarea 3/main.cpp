#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct nodoA *Alista;
struct nodoD{
       string nro;        // en este caso es un numero entero
       struct nodoD *sgte;
       Alista actividades = NULL;
};
 
typedef struct nodoD *Tlista;
 
 
void insertarFinal(Tlista &lista, string valor)
{
    Tlista t, q = new(struct nodoD);
 
    q->nro  = valor;
    q->sgte = NULL;
 
    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }
 
}


 
struct nodoA{
       string nro;        // en este caso es un numero entero
       struct nodoA *sgte;
       struct nodoA *ant;
};
 


void insertarFinalA(Alista &listay, string valor)
{
    Alista t, q = new(struct nodoA);
 
    q->nro  = valor;
    q->sgte = NULL;
    q->ant = NULL;
 
    if(listay==NULL)
    {
        listay = q;
    }
    else
    {
        t = listay;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        q->ant = t;
        t->sgte = q;
    }
 
}

void imprimir(Alista listay)
{
     int i = 0;
 
     while(listay != NULL)
     {
          cout <<' '<< i+1 <<") " << listay->nro << endl;
          listay = listay->sgte;
          i++;
     }
}

void reportarTodo(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          imprimir(lista->actividades);
          lista = lista->sgte;
          i++;
     }
}

void insertarActividad(Tlista &lista, string valor, string dia){
	while(lista->sgte != NULL){
		if(lista->nro.compare(dia)==0){
			insertarFinalA(lista->actividades,valor);
		}
		lista = lista->sgte;
	}
	
}

void reportarLista(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
		  lista = lista->sgte;
          i++;
     }
}

int main(int argc, char** argv) {
	Tlista lista = NULL;
	Alista lunes = NULL;
	Alista martes = NULL;
	Alista miercoles = NULL;
	Alista jueves = NULL;
	Alista viernes = NULL;
	Alista sabado = NULL;
	Alista domingo = NULL;
	printf("Nuevo\n");
	insertarFinal(lista, "Lunes");
	insertarFinal(lista, "Martes");
	insertarFinal(lista, "Miercoles");
	insertarFinal(lista, "Jueves");
	insertarFinal(lista, "Viernes");
	insertarFinal(lista, "Sabado");
	insertarFinal(lista, "Domingo");
	int opcion= 9999;
	while(opcion!=8){
		printf("Menu\n");
		printf("1.Agregar actividad\n");
		printf("2.Ver todo\n");
		printf("3.Ver dia\n");
		scanf("%d",&opcion);
		switch (opcion)
		{
		case 1:{
			int ndia =0;
			
			printf("1. Lunes\n");
			printf("2. Martes\n");
			printf("3. Miercoles\n");
			printf("4. Jueves\n");
			printf("5. Viernes\n");
			printf("6. Sabado\n");
			printf("7. Domingo\n");
			printf("Ingrese numero de dia\n");
			scanf("%d",&ndia);
			printf("Ingrese actividad\n");
			char cad[200];
			scanf("%s",cad);
			string act(cad);
			if(ndia == 1){
				insertarFinalA(lunes,act);
				//insertarActividad(lista, "JugarF", "Lunes");
			}else if(ndia == 2){
				insertarFinalA(martes,act);
				//insertarActividad(lista, act, "Martes");
			}else if(ndia == 3){
				insertarFinalA(miercoles,act);
				//insertarActividad(lista, act, "Miercoles");
			}else if(ndia == 4){
				insertarFinalA(jueves,act);
				//insertarActividad(lista, act, "Jueves");
			}else if(ndia == 5){
				insertarFinalA(viernes,act);
				//insertarActividad(lista, act, "Viernes");
			}else if(ndia == 6){
				insertarFinalA(sabado,act);
				//insertarActividad(lista, act, "Sabado");
			}else if(ndia == 7){
				insertarFinalA(domingo,act);
				//insertarActividad(lista, act, "Domingo");
			}
			printf("Ingresada\n");
			
			}
		case 2:{
			int p =0;
			if(lunes!=NULL){
				printf("Lunes\n");
				imprimir(lunes);
			}
			if(martes!=NULL){
				printf("Martes\n");
				imprimir(martes);
			}
			if(miercoles!=NULL){
				printf("Miercoles\n");
				imprimir(miercoles);
			}
			if(jueves!=NULL){
				printf("Jueves\n");
				imprimir(jueves);
			}
			if(viernes!=NULL){
				printf("Viernes\n");
				imprimir(viernes);
			}
			if(sabado!=NULL){
				printf("Sabado\n");
				imprimir(sabado);
			}
			if(domingo!=NULL){
				printf("Domingo\n");
				imprimir(domingo);
			}			
			
			
			}
		case 3:{
			int ndia=0;
			printf("1. Lunes\n");
			printf("2. Martes\n");
			printf("3. Miercoles\n");
			printf("4. Jueves\n");
			printf("5. Viernes\n");
			printf("6. Sabado\n");
			printf("7. Domingo\n");
			printf("Ingrese numero de dia\n");
			scanf("%d",&ndia);
			if(ndia == 1){
				imprimir(lunes);
				//insertarActividad(lista, "JugarF", "Lunes");
			}else if(ndia == 2){
				imprimir(martes);
				//insertarActividad(lista, act, "Martes");
			}else if(ndia == 3){
				imprimir(miercoles);
				//insertarActividad(lista, act, "Miercoles");
			}else if(ndia == 4){
				imprimir(jueves);
				//insertarActividad(lista, act, "Jueves");
			}else if(ndia == 5){
				imprimir(viernes);
				//insertarActividad(lista, act, "Viernes");
			}else if(ndia == 6){
				imprimir(sabado);
				//insertarActividad(lista, act, "Sabado");
			}else if(ndia == 7){
				imprimir(domingo);
				//insertarActividad(lista, act, "Domingo");
			}
			}
			
		}
		
	}
	return 0;
}

