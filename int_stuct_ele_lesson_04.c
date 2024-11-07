#include<stdio.h>

//global structure
struct Person
{
        int age;
        float salary;
};

int main ()
{
        struct Person person1, person2;

        printf("Enter information for person1\n");
        printf("Enter Age : ");
        scanf ( "%d", &person1.age);

        printf("Enter Salary : ");
        scanf ("%f", &person1.salary);

        printf( "\nPerson1 : \n");
        printf("Age = %d\n",person1.age);
        printf("Salary = %.2f\n",person1.salary);

        printf("\n\nEnter information for person2\n");
        printf("\nEnter Age : ");
        scanf ("%d", &person2.age);

        printf("Enter Salary : ");
        scanf ("%f", &person2.salary);

        printf("\nPerson2 : \n");
        printf("Age = %d\n",person2.age);
        printf("Salary = %.2f\n",person2.salary);

    getch();
}
