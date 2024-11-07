#include<stdio.h>

struct Person
{
        char name[20];
        int age;
        float salary;
};

void display(struct Person p)
{
    printf("\nName: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %f\n",p.salary);
}

int main ()
{
        struct Person person1,person2;

        strcpy(person1.name,"Ankur Basak");
        person1.age = 20;
        person1.salary = 5563.53;

        strcpy(person2.name,"Arnab Basak");
        person2.age = 25;
        person2.salary = 100000.53;

        display(person1);
        display(person2);

        getch();

}
