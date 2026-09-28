#include<stdio.h>

int main()
{
    int age, Semester;
    float Height, Weight, CGPA;
    char name[15];

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter Your Age: ");
    scanf("%d",&age);

    printf("Your Hight: ");
    scanf("%f",&Height);

    printf("Your weight: ");
    scanf("%f",&Weight);

    printf("Which Semister: ");
    scanf("%d",&Semester);

    printf("Targeted CGPA: ");
    scanf("%f",&CGPA);
    age= age + 5 ;
    printf("\nName:%s", name);
    printf("\nYour age after 5 years is: %d",age);



    return 0;
}