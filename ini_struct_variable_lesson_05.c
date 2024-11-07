#include<stdio.h>

//global structure
struct Person
{
        int age;
        float salary;
};

int main ()
{
        struct Person person1 = {23,24500.56};
        struct Person person2,person3;

        //element wise assignment
        person2.age = 25;
        person2.salary = 25500.45;

        //structure variable assignment
        person3 = person2;


        printf( "\nPerson1 : \n");
        printf("Age = %d\n",person1.age);
        printf("Salary = %.2f\n",person1.salary);

        printf("\nPerson2 : \n");
        printf("Age = %d\n",person2.age);
        printf("Salary = %.2f\n",person2.salary);

        printf("\nPerson3 : \n");
        printf("Age = %d\n",person3.age);
        printf("Salary = %.2f\n",person3.salary);

}

