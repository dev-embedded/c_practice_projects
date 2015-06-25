/*
 * Filename: lib_ring-buffer_test_dong.h
 * LINGdong 20150529
 */

#ifndef _LIB_BUFFER_TEST_DONG_H
#define _LIB_BUFFER_TEST_DONG_H

#include <stdio.h>
#include <stdlib.h>

#define LIB_BUFFER_LENGTH sizeof(struct lib_buffer)
#define LINKED_LIST_LENGTH sizeof(struct singly_linked_list)
#define NODE_NUM 7
//#define node_num 3
//int node_num = 3; - multiple definition of 'node_num'

#define NULL 0

void lib_buffer_test_dong();

/*** ***/
typedef struct singly_linked_list {
	int list_data;
	struct singly_linked_list *next;
}NODE;

NODE *singly_linked_list_create(int node_num);
NODE *singly_linked_list_delete();

int singly_linked_list_show(NODE *head, int node_num);
int lib_buffer_write(NODE *head, int node_num);
int lib_buffer_read(NODE *head, int node_num);

#endif
