#include <stdio.h>
#include<string.h>
struct Info{
    char job[30];
    int age;
    double height;
};
struct Person{
    char *name;
    struct Info basics;
    char* parents[2];
};
void main(void){
    struct Person Tom = {"Tom", {{"engineer"},30,183},{"Tim","Mary"}}; 
    struct Person Cook, personCopy; // for Pointer to str, it does not need {}

    Cook.name = "Cook";

    strcpy((Cook.basics.job), "CEO");
    //Cook.basics.job[30] = "CEO";  THIS WAY DOES NOT WORK
    Cook.basics.age = 55;
    Cook.basics.height = 180;

    Cook.parents[0] = "dad";
    Cook.parents[1] = "mom";

    personCopy = Cook;
    printf("name: %s job: %s age: %d height: %.2lf cm parents: %s & %s",
            personCopy.name, (personCopy.basics.job), personCopy.basics.age, 
            personCopy.basics.height, personCopy.parents[0], personCopy.parents[1]);


}