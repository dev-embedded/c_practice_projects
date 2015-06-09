/* 
 * The projects' filename: c_practice_projects.c
 *
 * The projects' goal:
 * 1. First aim is to test the other functions in the sub-folders: ./lib_src.
 * 2. Second aim is to test the functions of the buffer libraray in the sub-folders: ./lib_src.
 *
 * Notes:
 * The "main" function is found in c_practice_projects.c.
 * All of projects' functions are listed at the bottom.
 * 
 * Created on: May 13, 2015
 *     Author: LINGdong
 */

#include "../lib_include/global.h"
#include <stdio.h>  

int main()
{
	/* To test string operation functions in the ../lib_src sub-folder. */
	str_test();

	/* To test buffer functions in the ../lib_src sub-folder. */
//	lib_buffer_test_dong();
//	lib_buffer_test_joey();	
//	lib_buffer_test_song();	
//	lib_buffer_test_tao();

//	lib_buffer_app_dong();
//	lib_buffer_app_joey();
//	lib_buffer_app_song();
//	lib_buffer_app_tao();

	printf("Hello Dong, Joey, Song & Tao! 20150601\n");

	return 0;
}

/*
 * The projects' list: string libraray and buffer librarary.
 * List of fuctions for the string libraray:
 * int ld_strlen();
 * int ld_strcmp();
 * char *ld_strcpy();
 * char *ld_strcat();
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
