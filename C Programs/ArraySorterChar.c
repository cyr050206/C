//sorting a character array using bubble sort

#include<stdio.h>
#include<string.h>
void sort(char array[], int size)
{
    for( int i = 0; i< size -1; i++)
    {
        for( int j = 0; j< size-1; j++)
        {
            if(array[j] > array[j+1])
            {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void print(char array[], int size)
{
    for(int i=0;i<size; i++)
    {
        printf("%c ", array[i]);
    }
}

int main(){
    char array[10];
    for(int i=0; i<10; i++)
    {
        printf("\nEnter %d character :" ,(i+1));
        scanf("");
        scanf(" %c", &array[i]);
    }
    int size = sizeof(array)/ sizeof(array[0]);
    sort(array, size);
    print(array, size);
}