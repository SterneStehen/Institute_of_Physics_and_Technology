#include <stdlib.h>
#include <stdio.h>

typedef int Data;

typedef struct Node
{
	Data num;
	struct Node * next;
	struct Node * prev;	
}Node;

void ft_print_dbg(Node * list)
{
	Node * p;
	p = list->next;
	printf("------------------\n");
	printf("list= _, prev = %p, curr = %p, next = %p\n", list->prev, list, list->next);
	while (p != list)
	{
		printf("num = %d, prev = %p, curr = %p, next = %p\n", p->num, p->prev, &p->num, p->next);
		p = p->next;
	}
}

void ft_print(Node * list)
{
	Node * p;
	p = list->next;
	while (p != list)
	{
		printf("%d ", p->num);
		p = p->next;
	}
	printf("\n");
}
void ft_print_revers(Node * list)
{
	Node * p;
	p = list->prev;
	while (p != list)
	{
		printf("%d ", p->num);
		p = p->prev;
	}
	printf("\n");
}

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

	ft_print(list);
	ft_print_revers(list);
	ft_print_dbg(list);
	
	// printf("%d\n", p->num);
	// p = p->next;
	// printf("%d\n", p->num);
	// p = p->next;
	// printf("%d\n", p->num);

	
	
}