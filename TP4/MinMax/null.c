#include <stdio.h>
#include <string.h>

int main(void){
    int *bad_addr = NULL;  
    *bad_addr = 12345;
    return 0;
}
