#include<stdio.h>
#include<string.h>
struct Info{
    char * name;
    int age;
    char gender[7];
    char* parents[2];
};
void fun1(struct Info *x, struct Info *y);
void main(void){
    struct Info p1, p2;
    fun1(&p1, &p2);          //return values to p1, p2
    
    printf("%s  %d  %s  %s & %s\n%s  %d  %s  %s & %s",
    p1.name, p1.age, p1.gender, p1.parents[0],p1.parents[1],
    p2.name,p2.age,p2.gender,p2.parents[0],p2.parents[1]);
}
void fun1(struct Info *x, struct Info *y){
    x -> name = "Hellen";
    x -> age = 15;
    strcpy(x -> gender, "female");
    x -> parents[0] = "daddy";
    x -> parents[1] = "mommy";

    (*y).name = "Mike";
    (*y).age = 39;
    strcpy((*y).gender, "male");
    (*y).parents[0] = "father";
    (*y).parents[1] = "mother";
}