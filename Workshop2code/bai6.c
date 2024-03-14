#include <stdio.h>
#include <stdlib.h>

int main(){
int code;
 for(code = 0; code < 256; code++)
    {    printf("%c : %d, %o, %x\n", code, code, code, code); // %c ky tu don, %d so nguyen hexa co dau
                                                              // %o So nguyen octal ko dau
                                                              // %x So nguyen hexa ko dau
if (code !=0 && code %10=0)
 getchar(); }


  
return 0 ;

}


