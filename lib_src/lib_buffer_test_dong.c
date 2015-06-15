#include <lib_buffer_test_dong.h>
int LINKED_LIST_NODE = 3;

void lib_buffer_test_dong()
{
//	struct lib_buffer *buffer_linked_list;

	struct singly_linked_list *assistor_pointer;

	assistor_pointer = singly_linked_list_create(LINKED_LIST_NODE);

	singly_linked_list_show(assistor_pointer, LINKED_LIST_NODE);

	return 0;
}

/*** library buffer functions ***/
struct lib_buffer *lib_buffer_create()
{
	return 0;
}

struct lib_buffer *lib_buffer_free()
{
	return 0;
}

struct lib_buffer *lib_buffer_write()
{
	return 0;
}

struct lib_buffer *lib_buffer_read()
{
	return 0;
}

/*** singly linked list functions ***/
struct singly_linked_list *singly_linked_list_create(int LINKED_LIST_NODE)
{
	int list_data, node;
	/* create *head & *tail needed by a node. pointer here is used as operate assistor. */
	struct singly_linked_list *head, *tail, *pointer;

	head = tail = NULL;  /* reset *head & tail to 0. */

	/* create the nodes required. */
	for(node = 0; node < LINKED_LIST_NODE; node++)
		{	
			/* Enter the linked list data. */
			printf("\nEnter the linked_list_data: ");
			scanf("%d", &list_data);

			/* Allocate memory space, assign the data & set *next to NULL for a node creation. */
			pointer = (struct singly_linked_list *) malloc(LINKED_LIST_LENGTH);
			pointer->list_data = list_data;
			pointer->next = NULL;
		
			if(head == NULL)  /* First node check! */
				head = tail = pointer;
			else
				{
					tail->next = pointer;  /* tail->next points to new node = pointer here. Linked list is expanded. */
					tail = pointer;  /* tail node is moved to new node = pointer here. */
				}
		}
	tail->next = NULL;  /* *next of last node has to set to NULL. */

	return (head);
}

struct singly_linked_list *singly_linked_list_delete()
{
	return 0;
}

struct singly_linked_list *singly_linked_list_length()
{
	return 0;
}

struct singly_linked_list *singly_linked_list_insert()
{
	return 0;
}

struct singly_linked_list *singly_linked_list_sort()
{
	return 0;
}

struct singly_linked_list *singly_linked_list_show(struct singly_linked_list *head, int LINKED_LIST_NODE)
{
	int node;
	/* Pointer here is used as operate assistor. */
    struct singly_linked_list *pointer;

	pointer = head;  /* Assign the linked list to pointer. */
    for(node = 0; node < LINKED_LIST_NODE; node++)
		{
			printf("\nThe linked list data is: %d\n", pointer->list_data);
			pointer = pointer->next;  /* Set next node to pointer. */
	    }

	return 0;
}
