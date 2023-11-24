#include <stdio.h>
#include <conio.h>
typedef struct
{
    char name[25];
    char password[12];
    int id;
} bruh;
int main()
{
    bruh user1 = {"Cyrus", "ewory", 42069};
    bruh user2 = {"Rumao", "fbgy"};
    printf("\nEnter the id of user 2: ");
    scanf("%d", &user2.id);
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}