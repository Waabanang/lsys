#include "lsys.h"

struct node *string;
char *ruleset[];

void init_string(char *axiom){
	string = malloc (sizeof (struct node));
	string.c = '\0';
	string.next = NULL;

	struct node *current = string;

	while ('\0' != *axiom) {
		struct node next = malloc (sizeof (struct node));
		next.c = *axiom;
		next.next = NULL;
		current.next = &next;
		current = current.next;
		++axiom;
	}
}

 
