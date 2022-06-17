/**
 * 此文件来源B站的《Dr.Dng陪跑CSAPP: bigONE《深入理解计算机系统》》第4集，跟着练习
 * @file hello.c
 * @author kevin
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * @link https://www.bilibili.com/video/BV1hf4y1P7qW?p=4
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <unistd.h>

int g_var = 3;
int g_bss_var;

static int l_var = 5;
static int l_bss_var;

int add(int a, int b) {
    return a + b;
}

int main(int argc, char const *argv[])
{
    printf("hello world! %d\n",getpid());
    printf("main addr: %p\n",main);
    printf("add: %d\n",add(3, 4));    
    getchar();
}
