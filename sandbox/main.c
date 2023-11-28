#include <stdio.h>
#include <stdlib.h>
#include "header.h"

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

//void free_listint2(listint_t **head);

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int delete_nodeint_at_index(listint_t **head, unsigned int index);

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while(temp != NULL && count < index)
	{
		//if (count == index - 1)
		//{
		//	prev = temp;
		//}
		prev = temp;

		temp = temp->next;
		count++;
	}

	prev->next = temp->next;
	free(temp);
	return (1);
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 5);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    return (0);
}

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while(h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;

	if(*head == NULL)
	{
		*head = new;
		return (new);
	}

	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}


int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if((*head) == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	temp = *head;
	
	*head = (*head)->next;

	free(temp);

	return (n);
}

void free_listint(listint_t *head)
{
	listint_t *next_node = NULL;

	while(head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	int count = 0;

	while(current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (count < index)
	{
		return (NULL);
	}

	return (current);

	//while(temp != NULL)
	//{
	//	if (i == index)
	//		return (temp);

	//	temp = temp->next;
	//	i++;
	//}

	return (NULL);
}


int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int sum = 0;

	while(temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *next_next = NULL;
	listint_t *next_temp = NULL;
	listint_t *new = malloc(sizeof(listint_t));
	int count = 0;

	while(temp != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			next_temp = temp->next;
			temp->next = new;
		}
		//printf("before: %i, index: %i\n", count, idx);
		temp = temp->next;
		//printf("sayy %i, idx: %i\n", count, idx);
		count++;
	}

	if (count < idx)
		return (NULL);

	//next_next = temp->next;
	
	temp->n = n;
	temp->next = next_temp;

	return (new);
}
