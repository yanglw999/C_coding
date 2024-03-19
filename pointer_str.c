#include<stdio.h>
#include<string.h>
void main(void){
    // pointer var aa stores the address code of string
    char *aa = "we can use a pointer to a string constant.";
    char bb[] = "We can also use an array.";
    // array bb directly stores the string in its space allocated by system

    char *cc[] = {"We can", "use an array", "of pointers to a contant"};
    char dd[][11] = {"Or we can","use a 2-D", "array."};

    printf("Address: \n\taa = %p \n\tcc[0] = %p \n\tcc[1] = %p \n\tcc[2] =%p"
        "\n\tbb = %p \n\tdd[0] = %p \n\tdd[1] = %p \n\tdd[2] = %p \n",
        aa, cc[0],cc[1],cc[2],bb,dd[0],dd[1],dd[2]);

    puts(aa);
    puts(bb);
    int i;
    for(i = 0; i < 3; i++) puts(cc[i]);
     for(i = 0; i < 3; i++) puts(dd[i]);
}