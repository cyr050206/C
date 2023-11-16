#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3


void printPuzzle(int puzzle[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", puzzle[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int isSolved(int puzzle[SIZE][SIZE]) {
    int count = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (puzzle[i][j] != count && !(i == SIZE - 1 && j == SIZE - 1)) {
                return 0; 
            }
            count++;
        }
    }
    return 1; 
}


void swap(int puzzle[SIZE][SIZE], int emptyRow, int emptyCol, int newRow, int newCol) {
    int temp = puzzle[emptyRow][emptyCol];
    puzzle[emptyRow][emptyCol] = puzzle[newRow][newCol];
    puzzle[newRow][newCol] = temp;
}


void initializePuzzle(int puzzle[SIZE][SIZE]) {
    int count = 1;
    int i, j; 
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            puzzle[i][j] = count++;
        }
    }
    puzzle[SIZE - 1][SIZE - 1] = 0; 
}


void shufflePuzzle(int puzzle[SIZE][SIZE]) {
    srand(time(NULL));
    int i, j; 
    for (i = SIZE - 1; i > 0; i--) {
        for (j = SIZE - 1; j > 0; j--) {
            int randRow = rand() % (i + 1);
            int randCol = rand() % (j + 1);
            swap(puzzle, i, j, randRow, randCol);
        }
    }
}

int main() {
    int puzzle[SIZE][SIZE];

    
    initializePuzzle(puzzle);
    shufflePuzzle(puzzle);

    
    while (!isSolved(puzzle)) {
        
        printPuzzle(puzzle);

        
        int move;
        printf("Enter the number you want to move (0 to exit): ");
        scanf("%d", &move);

        if (move == 0) {
            printf("Exiting the game.\n");
            break;
        }

        
        int row, col;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (puzzle[i][j] == move) {
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        
        if ((row > 0 && puzzle[row - 1][col] == 0) ||
            (row < SIZE - 1 && puzzle[row + 1][col] == 0) ||
            (col > 0 && puzzle[row][col - 1] == 0) ||
            (col < SIZE - 1 && puzzle[row][col + 1] == 0)) {
          
            swap(puzzle, row, col, row - 1, col);
        } else {
            printf("Invalid move! Try again.\n");
        }
    }

    
    printPuzzle(puzzle);

    return 0;
}