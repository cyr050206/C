//sorting an array using bubble sort
#include<stdio.h>
#include<string.h>

void sort(int array[], int size){
    for(int i = 0; i< size - 1; i++){
        for( int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            } 
        }
    }
}
void printing(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
}


int main(){
    int array[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter %dth number: ", i+1);
        scanf(" %d", &array[i]);
    }
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    printing(array,size);
}