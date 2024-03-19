#include<stdio.h>
#include<string.h>
int mycmp(const char *s1, const char* s2){
    int index = 0;
    while(1){// array method 1
        if(s1[index] != s2[index]){
            break;
        }else if(s1[index] == '\0'){ //s1[index] == s2[index] && s1[index]=='\0'
            break;
        }
    index ++;
        
    }
    return s1[index] - s2[index];
}
int cmpr(const char *s1, const char* s2){
    while (*s1 == *s2 && *s1 != '\0') // pointer
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int compare(const char *s1, const char* s2); // if function is implemented before main(), 
void main(void){                             //it does not need declaration
    char s1[] = "abc";
    char s2[] = "Abc";
    printf("the mycmp result: %d\n", mycmp(s1,s2));
    printf("the compare result: %d\n", compare(s1,s2));
     printf("the cmpr result: %d\n", cmpr(s1,s2));

}
// array method 2
int compare(const char *s1, const char* s2){
    int index = 0;
    while(s1[index] == s2[index] && s1[index]!='\0'){
        index ++;   
    }
    return s1[index] - s2[index];
}

