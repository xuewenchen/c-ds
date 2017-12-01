#include "simpleList.h"

int main () {
	plist l = newList();
	push_front(l, 0);

	for (pnode node = l->header; node != NULL; node = node->next) {
		printf("%d\n", node->n);
	}
	
	return 0;
}
