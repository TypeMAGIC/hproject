#pragma once

#include <stdio.h>
#include <stdlib.h>

//큐의 노드 갯수는 최고 MAX_VALUE갯수 만큼만 가능합니다.
#define MAX_VALUE 100

typedef struct Node
{
	int value;
	Node* next;
	Node* prev;
}Node;

Node* head = NULL;
Node* tail = NULL;

//큐의 맨 마지막 노드에 새로운 노드를 추가하고 그 노드를 반환합니다.
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
		Node* tail_prev = (Node*)malloc(sizeof(Node));
		tail_prev->value = tail->value;
		tail_prev->next = tail;
		tail_prev->prev = tail->prev;
		tail->value = value;
		tail->prev = tail_prev;
		tail->prev->next = tail_prev;
		return tail;
	}
}

//큐의 맨 앞 노드를 반환합니다.
Node* pop()
{
	return head;
}

//스택의 모든 노드들을 없앱니다.
void clear()
{
	Node* free_Node = (Node*)malloc(sizeof(Node));
	free_Node = head;
	while (free_Node)
	{
		free(free_Node);
		free_Node = free_Node->next;
	}
}

//큐의 맨 앞의 노드 값을 보여줍니다.
int front()
{
	return head->value;
}

//큐의 노드중 value와 일치하는 노드를 찾아 제거하고 앞 뒤 노드의 관계를 다시 설정합니다.
//제거된 노드를 반환합니다.
Node* remove(int value)
{
	Node* search = (Node*)malloc(sizeof(Node));
	search = head;
	Node* save = (Node*)malloc(sizeof(Node));

	while (search)
	{
		if (search->value == value)
		{
			save = search;
			if (search->prev == NULL)
			{
				head = head->next;
				head->prev = NULL;
				search = search->next;
			}
			else if (search->next == NULL)
			{
				tail = tail->prev;
				tail->next = NULL;
				search = search->prev;
			}
			else
			{
				search->next->prev = search->prev;
				search->prev->next = search->next;	
			}
			free(search);
		}
		search = search->next;
	}
	return save;
}

//node의 뒤에 새로운 값을 추가합니다.v
void insert(Node* prev_node, Node* new_node)
{
	prev_node->next = new_node;
	prev_node->next->prev = new_node;
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
}

//value와 일치하는 노드를 찾고 새로운 노드로 교체합니다.
//교체되는 노드를 반환합니다.
Node* replace(int value, Node* new_node)
{
	Node* search = (Node*)malloc(sizeof(Node));
	search = head;
	Node* save = (Node*)malloc(sizeof(Node));
	
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

//큐에서 value와 일치하는 노드를 찾아 반환합니다.
Node* find(int value)
{
	Node* search = (Node*)malloc(sizeof(Node));
	search = head;
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