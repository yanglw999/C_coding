#include<stdio.h>
#include<string.h>
struct Info{
    char *name;
    int age;
    char gender[6];
};
void main(void){
    struct Info person1;
    struct Info *p;

    person1.name = "Jake";
    person1.age = 19;
    strcpy(person1.gender, "male");

    p = &person1; // pointing at person1 address
    (*p).name = "Anna";
    p -> age = 5;
    //strcpy((*p).gender, "female");
    strcpy(p->gender, "female");
    printf("name: %s age: %d gender: %s", person1.name, person1.age, person1.gender);

    (*p).name = "Anna";
    p -> age = 5;
    //strcpy((*p).gender, "female");
    strcpy(p->gender, "female");

    printf("\n\nname: %s age: %d gender: %s", (*p).name, p->age, p->gender);
}