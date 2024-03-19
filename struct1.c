#include<stdio.h>
#include<string.h>
struct Consumption{
    char city[20];
    int year;
    double usage;
};
struct Resource{
    char material[30];
    double longitude;
    double latitude;
    double quantity;
    char units[20];

};
void main(void){
    struct Resource metal, fuel;
    struct Resource wood = {"oak", 32.5, 13.5, 5e+8, "hectares"};
    struct Consumption water;

    metal.latitude = 32.1;
    metal.longitude = 57.3;
    metal.quantity = 3e+10;
    strcpy(metal.material, "Iron");// metal.material = "Iron";
    strcpy(metal.units, "cubic metres");

    printf("the metal info is:\n%s\n%.1lf degrees longitude\n%.1lf degrees latitude\n" 
            "%.5lf %s", metal.material, metal.longitude,metal.latitude, metal.quantity, metal.units);

    printf("\nEnter the consumption of water as below format\ncity year usage\n");
    scanf("%s %d %lf", &water.city, &water.year, &water.usage);
    printf("the info of water\n%s %d %4.0lf million litres", water.city, water.year, water.usage);


}