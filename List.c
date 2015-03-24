#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

//Borra el nodo n.
void deleteNode(struct node_struct *n){
	free(n);
}

//Imprime a lista
void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
}
//Calcula la lista de forma iterativa.
int leng_iter(struct node_struct* n){
	int i = 0;
 	for(; i<sizeof(n); i++){
	}
 	return i;
}

//Calcula la longitud de manera recursiva
int leng_rec(struct node_struct* n){
	if (n == NULL){
		return 0;
	} 
	return leng_rec(n->next) + 1;
}

// Regresa el máximo de la lista.
int max (struct node_struct* n){
    int max = n->value;
	int i = 0;
    for(; i<sizeof(n); i++){
			if (max < n->value){
					max = n->value;
			}	
		n = n->next;	
	}
			return max;
}
//Regresa la lista invertida.
struct node_struct *reversa(struct node_struct* n){
	if (n == NULL){
		return NULL;
			}
			
	struct node_struct* cola = n->next;
	n->next = NULL;
	reversa(cola)->next=n;
	return n;
}
		


