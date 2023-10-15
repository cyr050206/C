#include<stdio.h>
#include<string.h>

struct Student
{
    char name[10];
    int roll;
    long long int id;
    char gender;
};

int main()
{
    stud1();
    stud2();
    stud3();

}
   int stud1()
    {
    char p,r;
    long long int s,t;
    struct Student st1;
    printf("\nEnter student 1 details : ");
    printf("\nName: ");
    p = scanf("%s", &st1.name);
    printf("\nRoll no: ");
    t = scanf("%d", &st1.roll);
    printf("\nI'd : ");
    s = scanf(" %lld", &st1.id);
    printf("\nEnter gender (M/F): ");
    r = scanf(" %c", &st1.gender);
    st1.gender = toupper(st1.gender);
    return p,q,r,s;
    }

    void stud2()
    {
    struct Student st2;
    printf("\nEnter student 2 details : ");
    printf("\nName: ");
    scanf("%s", &st2.name);
    printf("\nRoll no: ");
    scanf("%d", &st2.roll);
    printf("\nI'd : ");
    scanf(" %lld", &st2.id);
    printf("\nEnter gender (M/F): ");
    scanf(" %c", &st2.gender);
    st2.gender = toupper(st2.gender);
    }

    void stud3()
    {
    struct Student st3;
    printf("\nEnter student 3 details : ");
    printf("\nName: ");
    scanf("%s", &st3.name);
    printf("\nRoll no: ");
    scanf("%d", &st3.roll);
    printf("\nI'd : ");
    scanf(" %lld", &st3.id);
    printf("\nEnter gender (M/F): ");
    scanf(" %c", &st3.gender);
    st3.gender = toupper(st3.gender);
    }
