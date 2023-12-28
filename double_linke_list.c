#include <stdlib.h>
#include <stdio.h>

typedef int Data;

typedef struct Node
{
	Data num;
	struct Node * next;
	struct Node * prev;	
}Node;


int main()
{
	Node z, a = {3}, b = {17}, c = {21};
	Node * list = &z;
	
	a.next = &b;
	a.prev = &z;
	b.next = &c;
	b.prev = &a;
	c.next = &z;
	c.prev = &b;
	z.next = &a;
	z.prev = &c;

	printf("%d ", a.num);
	printf("%d ", b.num);
	printf("%d ", c.num);
	printf("\n");

	Node * p;
	p = list->next;
	printf("%d\n", p->num);
	p = p->next;
	printf("%d\n", p->num);
	p = p->next;
	printf("%d\n", p->num);
}
