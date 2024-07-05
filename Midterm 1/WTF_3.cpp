#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int v;
	node *next;
}node; 

typedef struct LL
{
	node *head;
	node *tail;
}LL;

node* newnode(int v)
{
	node *n = (node*)malloc(sizeof(node));
	n->v = v;
	n->next = 0;
	
	return n;
}

LL* newLL()
{
	LL *x = (LL*)malloc(sizeof(node));
	x->head = 0;
	x->tail = 0;
	
	return x;
}

void append(LL* x,int v)
{
	
	if (x->head==0&&x->tail==0)
	{
		x->tail = newnode(v);
		x->head = x->tail;
		
		return;
	}
	
	node *n = newnode(v);
	x->tail->next = n;
	x->tail = n;
	
	return;
}

LL* read()
{
	char c;
	LL *x = newLL();
	
	while (scanf("%c",&c))
	{
		append(x,(int)c-'0');
		if (c=='\n') {
			break;
		}
	}
	
	return x;
}

void show(LL *x)
{
	node *n = x->head;
	while (n)
	{
		if (n->v^'\n'-'0')
		{
			printf("%d",n->v);
		}
		n=n->next;
	}
	
	return;
}

int main()
{
	LL *x = read();
	
	show(x);
}
