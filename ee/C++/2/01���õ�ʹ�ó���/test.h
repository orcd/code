#pragma once
#include<stdio.h>


#ifdef __cplusplus//告诉C++编译器，里面的函数是按照C语言方式编译的，不要按照C++的方式去找
extern "C"{
#endif

	void func();

	void func2();

#ifdef __cplusplus
}
#endif


