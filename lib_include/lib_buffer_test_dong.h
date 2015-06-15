/*
 * Filename: lib_buffer_test_dong.h
 * LINGdong 20150529
 */

#ifndef _LIB_BUFFER_TEST_DONG_H
#define _LIB_BUFFER_TEST_DONG_H

#define LIB_BUFFER_LENGTH sizeof(struct lib_buffer)
#define LINKED_LIST_LENGTH sizeof(struct singly_linked_list)
//#define LINKED_LIST_NODE 3
//int LINKED_LIST_NODE = 3; - multiple definition of 'LINKED_LIST_NODE'
#define NULL 0

#include <stdio.h>

void lib_buffer_test_dong();

/*** ***/
struct lib_buffer {
	int buffer_data;
	struct lib_buffer *next;
	struct lib_buffer *prev;
};

struct lib_buffer *lib_buffer_create();
struct lib_buffer *lib_buffer_free();

struct lib_buffer *lib_buffer_write();
struct lib_buffer *lib_buffer_read();

/*** ***/
struct singly_linked_list {
	int list_data;
	struct singly_linked_list *next;
};

struct singly_linked_list *singly_linked_list_create(int LINKED_LIST_NODE);
struct singly_linked_list *singly_linked_list_delete();

struct singly_linked_list *singly_linked_list_length();
struct singly_linked_list *singly_linked_list_insert();
struct singly_linked_list *singly_linked_list_sort();
struct singly_linked_list *singly_linked_list_show(struct singly_linked_list *head, int LINKED_LIST_NODE);

#endif
