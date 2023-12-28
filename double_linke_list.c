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

void ft_insert(Node *a, Node * t)
{
	Node *b = a->next;
	t->next = b;
	t->prev = a;
	a->next = t;
	b->prev = t;
}

void  ft_remove(Node * list)
{
	Node *a = list->prev;
	Node *b = list->next;
	a->next = b;
	b->prev = a;
}

int ft_is_empty(Node * list)
{
	return (list->next == list && list->prev == list);
}

void ft_init(Node * list)
{
	list->next = list;
	list->prev = list;
}

int main()
{
	Node z, a, b, c, u;
	z.num = 0, a.num = 3, b.num = 17, c.num = 21, u.num = 10;
	Node * list = &z;
	
	ft_init(list);
	printf("list is epty = %s\n", ft_is_empty(list) ? "YES" : "NO");
	ft_insert(&z, &a);
	ft_print(list);
	ft_insert(&a, &b);
	ft_print(list);
	ft_insert(&b, &c);
	ft_print(list);
	ft_insert(&a, &u);

	ft_print(list);
	ft_print_revers(list);
	ft_print_dbg(list);

	ft_remove(&u);
	printf("list is epty = %s\n", ft_is_empty(list) ? "YES" : "NO");
	ft_print(list);
	ft_print_revers(list);

}