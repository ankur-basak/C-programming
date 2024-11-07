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

        if(person1.age==person2.age && person1.salary==person2.salary)
            printf("Person1 equal person2");
        else
            printf("Person1 not equal to person2");

        getch();
}

