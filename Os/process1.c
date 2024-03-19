#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // unix
void main(void){
    printf("hello world(pid: %d)\n", (int)getpid());
    int rc = fork();
    if(rc < 0){
        printf("fork failed\n");
        exit(1);

    }else if(rc == 0){
        printf("hello, i am child (pid: %d)\n",(int)getpid() );

    }else{
        printf("i am parent of %d (pid: %d)\n", rc, (int)getpid());

    }

}