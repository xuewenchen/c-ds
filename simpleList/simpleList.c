#include "simpleList.h"

plist newList() {
	plist l = (plist)malloc(sizeof(list));	
	l->length = 0;
	l->header = NULL;
	l->tail = NULL;
	return l;
}

pnode newNode(int n) {
	pnode node = (pnode)malloc(sizeof(int));
	node->n = n;
	node->next = NULL;
	return node;
}

void push_back(plist l, int n) {
	pnode node = newNode(n);
	if (l->length == 0) {
		l->header = l->tail = node;
	} else {
		l->tail->next = node;
		l->tail = node;
	}
	l->length++;
}

void push_front(plist l, int n) {
	pnode node = newNode(n);
	if (l->length == 0) {
		l->header = l->tail = node;
	} else {
		node->next = l->header;
		l->header = node;
	}
	l->length++;
}
