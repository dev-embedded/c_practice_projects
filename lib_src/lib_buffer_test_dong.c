#include <lib_buffer_test_dong.h>
//int NODE_NUM = 3;

void lib_buffer_test_dong()
{
	NODE *head;
	char command;  /* Selection to w(write) or r(read) a data into a buffer. */

	head = singly_linked_list_create(NODE_NUM);
	printf("The ring-buffer was found.\n");
	singly_linked_list_show(head, NODE_NUM);

	while(1)
	{
		printf("please select w(write) or r(read) a data into the buffer.\n");
		scanf("%c",&command);

		if(command == 'r')
		{
			lib_buffer_read(head, NODE_NUM);
			singly_linked_list_show(head, NODE_NUM);
		}
		
		if(command == 'w')
		{
			lib_buffer_write(head, NODE_NUM);
			singly_linked_list_show(head, NODE_NUM);
		}
	}

	return 0;
}

/*** singly linked list functions ***/
NODE *singly_linked_list_create(int node_num)
{
	int node;
	/* create *head & *tail needed by a node. pointer here is used as operate assistor. */
	NODE *head, *tail, *pointer;

	head = tail = NULL;  /* reset *head & tail to 0. */

	/* create the nodes required. */
	for(node = 0; node < node_num; node++)
		{	
			/* Enter the linked list data. */
/*			printf("\nEnter the linked_list_data: ");
			scanf("%d", &list_data);*/

			/* Assign list_data = 0, because this a ring buffer. */
			int list_data = 0;

			/* Allocate memory space, assign the data & set *next to NULL for a node creation. */
			pointer = (NODE *) malloc(LINKED_LIST_LENGTH);
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

NODE *singly_linked_list_delete()
{
	return 0;
}

int singly_linked_list_show(NODE *head, int node_num)
{
	int node;
	/* Pointer here is used as operate assistor. */
    NODE *pointer;

	pointer = head;  /* Assign the linked list to pointer. */
    for(node = 0; node < node_num; node++)
		{
			printf("The linked list data is: %d.\n", pointer->list_data);
			pointer = pointer->next;  /* Set next node to pointer. */
	    }

	return 0;
}

/*** library buffer functions ***/
int lib_buffer_write(NODE *head, int node_num)
{
	NODE *current;
	int i, value = 0;

//	current = head->next;
	for(i = 0; i < node_num; i++)
	{
		current->list_data = value++;
		printf("Number written is: %d.\n", current->list_data);
		current = current->next;
	}

	return 0;
}

int lib_buffer_read(NODE *head, int node_num)
{
	NODE *current;
	int i;	

	current = head->next;
	for(i = 0; i < node_num; i++)
	{
		printf("Number read is: %d.\n", current->list_data);
		current = current->next;
	}

	return 0;
}
