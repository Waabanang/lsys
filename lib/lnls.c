#include <stdlib.h>

#include "lnls.h"

void replace (struct node *prev, char *set) {
	struct node *sent = malloc (sizeof (struct node));
	sent->c = '\0';
	sent->next = NULL;
	
	struct node *cur = sent;

	while ('\0' != *set) {
		struct node *new = malloc (sizeof (struct node));
		new->c = *set;
		new->next = NULL;

		cur->next = new;

		cur = new;

		++set;
	}

	cur->next = prev->next->next;
	
	free (prev->next);

	prev->next = sent->next;

	free (sent);	
}

