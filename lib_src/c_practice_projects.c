/* 
 * The projects' filename: c_practice_projects.c
 *
 * The projects' goal:
 * 1. First aim is to test the other functions in the sub-folders: ./lib_string.
 * 2. Second aim is to test the functions of the buffer libraray in the sub-folders: ./lib_buffer.
 *
 * Notes:
 * The "main" function is found in c_practice_projects.c.
 * All of projects' functions are listed at the bottom.
 * 
 * Created on: May 13, 2015
 *     Author: LINGdong
 */

#include "../lib_include/global.h"  

int main()
{
	/* To test string operation functions in the ../lib_string sub-folder. */
	str_test();

	/* To test buffer functions in the ../lib_buffer sub-folder. */
//	lib_buffer_test_dong();
//	lib_buffer_dong();

	printf("Hello Eclipse! 20150514");

	return 0;
}

/*
 * The projects' list: string libraray and buffer librarary.
 * List of fuctions for the string libraray:
 *
 *
 *
 * List of fuctions for the buffer libraray:
 * void lib_buffer_dong_create();
 * void lib_buffer_dong_free();
 *
 * void lib_buffer_dong_write();
 * void lib_buffer_dong_read();
 *
 * void lib_buffer_dong_locate();
 * void lib_buffer_dong_insert();
 *
 */
