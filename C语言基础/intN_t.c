#include <stdio.h>
#include <inttypes.h>

/**
 * @brief intN_t类型的测试
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    int32_t x ;
    int64_t y ;
    printf("x = %" PRid32 ", y = %" PRiu64 "\n", x, y);

    int a = 1;
    int b = 2;

    int c = a;
    b = a;
    a = c;

    a ^ a


    return 0;
}
