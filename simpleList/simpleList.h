#ifndef __SIMPLELIST_H__
#define __SIMPLELIST_H__

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int n;
	struct node* next;
} node, *pnode;

typedef struct list {
	int length;
	pnode header;
	pnode tail;
} list, *plist;

plist newList();
pnode newNode(int n);
void push_back(plist l, int n);
void push_front(plist l, int n);

#endif
