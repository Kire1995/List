#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 100000; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	print_list(l);

	printf("\n");



	struct node_struct * next;

	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}

	return 0;
}
