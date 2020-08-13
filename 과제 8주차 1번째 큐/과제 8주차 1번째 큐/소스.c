#pragma once

#include <stdio.h>
#include <stdlib.h>

//ť�� ��� ������ �ְ� MAX_VALUE���� ��ŭ�� �����մϴ�.
#define MAX_VALUE 100

typedef struct Node
{
	int value;
	Node* next;
	Node* prev;
}Node;

Node* head = NULL;
Node* tail = NULL;

//ť�� �� ������ ��忡 ���ο� ��带 �߰��ϰ� �� ��带 ��ȯ�մϴ�.
Node* push(int value)
{
	if (tail == NULL)
	{
		head = (Node*)malloc(sizeof(Node));
		head->value = value;
		head->next = tail;
		head->prev = NULL;
		tail = head;
		return tail;
	}
	else
	{
		Node* tail2 = (Node*)malloc(sizeof(Node));
		tail2 = tail;
		tail2->next = tail;
		tail->value = value;
		tail->prev = tail2;
		return tail;
	}
}

//ť�� �� �� ��带 ��ȯ�մϴ�.
Node* pop()
{
	return head;
}

//������ ��� ������ ���۴ϴ�.
void clear()
{
	Node* free_Node = head;
	while (free_Node)
	{
		free(free_Node);
		free_Node = free_Node->next;
	}
}

//ť�� �� ���� ��� ���� �����ݴϴ�.
int front()
{
	return head->value;
}

//ť�� ����� value�� ��ġ�ϴ� ��带 ã�� �����ϰ� �� �� ����� ���踦 �ٽ� �����մϴ�.
//���ŵ� ��带 ��ȯ�մϴ�.
Node* remove(int value)
{
	Node* search = head;
	Node* save;

	while (search)
	{
		if (search->value == value)
		{
			save = search;
			if (search->prev == NULL)
			{
				head = head->next;
				head->prev = NULL;
			}
			else if (search->next == NULL)
			{
				tail = tail->prev;
				tail->next = NULL;
			}
			else
			{
				search->next->prev = search->prev;
				search->prev->next = search->next;	
			}
			free(search);
			break;
		}
		search = search->next;
	}
	return save;
}

//node�� �ڿ� ���ο� ���� �߰��մϴ�.v
void insert(Node* prev_node, Node* new_node)
{
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	prev_node->next->prev = new_node;	
}

//value�� ��ġ�ϴ� ��带 ã�� ���ο� ���� ��ü�մϴ�.
//��ü�Ǵ� ��带 ��ȯ�մϴ�.
Node* replace(int value, Node* new_node)
{
	Node* search = head;
	Node* save;
	
	while (search)
	{
		if (search->value == value)
		{
			save = search;
			search = new_node;
			return save;
		}
		search = search->next;
	}
}

//ť���� value�� ��ġ�ϴ� ��带 ã�� ��ȯ�մϴ�.
Node* find(int value)
{
	Node* search = head;
	while (1)
	{
		if (search->value == value)
		{
			return search;
		}
		search = search->next;
	}
}

int main()
{

	push(3);
	push(5);
	push(15);
	push(32);
	push(5);
	push(6);
	push(5125);
	pop();
	remove(5);
	remove(3);
	Node* node1 = remove(6);
	push(3);
	insert(find(6), node1);
	replace(5125, remove(32));

}

#pragma once