#include <stdio.h>
/**
 * @brief https://www.runoob.com/cprogramming/c-pointers.html
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    int var = 20; /* 实际变量的声明 */
    int *ip;      /* 指针变量的声明 */

    ip = &var; /* 在指针变量中存储 var 的地址 */

    printf("var address: %p\n", &var);

    /* 在指针变量中存储的地址 */
    printf("ip var address: %p\n", ip);

    /* 使用指针访问值 */
    printf("*ip value: %d\n", *ip);

    return 0;
}
