#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    unsigned int *ptr = (unsigned int *)yamalloc(sizeof(int));
    *ptr = 0x321;
    int size = 12 * sizeof(int);
    unsigned int *new_ptr = (unsigned int *)yacalloc(12,sizeof(int));
    memset(new_ptr, 0x53, size);
    yafree((void *)ptr);
   	yafree((void *)new_ptr);
   
    return 0;
}