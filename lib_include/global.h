/*
 * Filename: global.h
 */

#ifndef _GLOBAL_H
#define _GLOBAL_H

/* Select DEBUG mode or not */
#define DEBUG

#include <stdio.h>

/*
 * DEBUG tag, ./lib_include/lib_buffer_test_dong.h and ./lib_buffer_dong.h are used for select lib_buffer_dong.h or lib_buffer_test_dong.h
 * Added by LINGdong 20150529
 */

#ifndef DEBUG
#include "./lib_buffer_dong.h"
#else
#include "./lib_buffer_test_dong.h"
#endif

#endif
