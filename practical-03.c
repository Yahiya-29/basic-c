#include<stdio.h>

int main()
{
    int marks1, marks2, eng, phy, math,com, chem;
    printf("Enter your Each Subjet Marks Out of 100");
    printf("\nEnter Your Maths Marks: ");
    scanf("%d",& math);

    printf("Enter Your Physics Marks: ");
    scanf("%d",&phy);

    printf("Enter Your chemistry Marks: ");
    scanf("%d",&chem);

    printf("Enter Your English Marks: ");
    scanf("%d",&eng);

    printf("Enter Your computer Marks: ");
    scanf("%d",&com);

    marks1 = eng + phy + math + com + chem;
    
    printf("\nYour Total marks is: %d",marks1);

      marks2= marks1/5 ;
    printf("\nYour Percentage is %d",marks2);
  
    if (marks2 >= 90){
        printf("\nYour Grade is (A)");

    }
    else if (marks2 >=70)
    {
        printf("\nYour Grade is (B)");
    }
     else if (marks2 >=50)
    {
        printf("\nYour Grade is (C)");
    }
     else if (marks2 >=35)
    {
        printf("\nYour Grade is (D)");
    }
    else{
        printf("\nYour Grade is (F)");
        
    }


    if (marks2>=35)
    {
        printf("\n\nYOU PASS");
    }
    else {
        printf("\n\nYOU FAIL");
    }
    


    return 0;
}