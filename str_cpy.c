#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* mycpy1(char * dst, char* src){

    int idx = 0;
    while(src[idx] != '\0'){
        dst[idx] = src[idx];
        idx++;

    }
    dst[idx] = '\0';
    return dst; // retturn the address
}

char* mycpy2(char * dst, char* src){
    char* ret = dst;
    while (*src != '\0')
    {
        *dst = *src;/* *dst++ = *src++; */
        dst++;
        src++;
    }
    *dst = '\0';
    return ret;
}
void main(void){
    char* str0 = "tomorrow";
    char* dst0 = (char*) malloc(strlen(str0) + 1);
    char *str1 = "next year";
    char *dst1 = (char*) malloc(strlen(str1) + 1);

    dst0 = mycpy1(dst0, str0);
    dst1 = mycpy2(dst1, str1);
    printf("dst0 str = %s\n", dst0 );
    printf("dst1 str = %s\n", dst1);
    free(dst0);
    free(dst1);

}