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

        person1.age = 27;
        person1.salary = 12500.50;

        printf("Person1 : \n");
        printf ("Age = %d\n",person1.age);
        printf ("Salary = %2f\n",person1.salary);


        person2.age = 20;
        person2.salary = 9500.75;

        printf("\nPerson2 : \n");
        printf("Age = %d\n",person2.age);
        printf("Salary = %2f\n",person2.salary);

    getch();
}
