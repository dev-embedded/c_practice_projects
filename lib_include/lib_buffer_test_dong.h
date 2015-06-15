/*
 * Filename: lib_buffer_test_dong.h
 * LINGdong 20150529
 */

#ifndef _LIB_BUFFER_TEST_DONG_H
#define _LIB_BUFFER_TEST_DONG_H

void lib_buffer_test_dong();

void lib_buffer_create();
void lib_buffer_free();

void lib_buffer_write();
void lib_buffer_read();

struct lib_buffer{
	int lb_data;
	struct lib_buffer *next;
	struct lib_buffer *prev;
};

void singly_linked_list_create();
void singly_linked_list_delete();

int singly_linked_list_length();
void singly_linked_list_insert();
void singly_linked_list_sort();
void singly_linked_list_show();

struct singly_linked_list{
	int sll_data;
	struct singly_linked_list *next;
};

#endif
