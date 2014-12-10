#include <stdio.h>

int main(int argc, char const *argv[])
{
        char k = 0x18; 
        char *ptr = (char *)my_malloc(sizeof(char));
        ptr = &k;
        printf("%d\n", *ptr);
        my_free((void *)ptr);
        return 0;
}