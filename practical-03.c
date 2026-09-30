#include<stdio.h>

int main()
{
    int marks, eng, phy, math,com, chem;

    printf("Enter Your Maths Marks: ");
    scanf("%d",& math);

    printf("Enter Your Physics Marks: ");
    scanf("%d",&phy);

    printf("Enter Your chemistry Marks: ");
    scanf("%d",&chem);

    printf("Enter Your English Marks: ");
    scanf("%d",&eng);

    printf("Enter Your computer Marks: ");
    scanf("%d",&com);

    marks = eng + phy + math + com + chem;

    printf("Your Total marks is: %d",marks);



    return 0;
}