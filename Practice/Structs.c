#include<stdio.h>
#include<string.h>

struct player
{
    char name[12];
    int score;
};

int main()
{
    struct player player1;
    struct player player2;
    strcpy(player1.name, "Cyrus");
    strcpy(player2.name, "Rumao");
    player1.score = 4;
    player2.score = 5;
    printf("%s ", player1.name);
    printf("%s\n", player2.name);
    printf("%d\n", player1.score);
    printf("%d\n", player2.score);
    return 0;
}