#include "stdio.h"
//#include "sys/types.h"
#include <unistd.h>
int main(){
   
    
    printf("real UID: %ld, effective UID: %ld\n", (long) getuid(), (long) geteuid());
    

    return 0;
}
