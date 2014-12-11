#include <stdio.h>

int main(int argc, char const *argv[])
{
        int k = 0x18; 
        int *ptr = (int *)my_malloc(sizeof(int));
        *ptr = k;
        printf("%d\n", *ptr);
        my_free((void *)ptr);
        return 0;
}