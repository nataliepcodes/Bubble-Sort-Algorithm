/* 
compare pairs of adjacent elements, two at a time, if they are not in the 
correct order then swap them
*/

#include <stdio.h>
#define MAX 5

void sortArray(int array[], int n);
void swapIntegers(int *a, int *b);

int main()
{
    printf("* * * * * * * * * * * * * * * * * *\n");
    printf("Sort Numbers in Ascending Order\n");
    printf("* * * * * * * * * * * * * * * * * *\n");
    printf("\n");
    printf("Enter 5 random numbers from 0 - 9 (one number at a time): \n");
    int arrayA[MAX] = {0};
    int num;
    
    for (int j = 1; j <= MAX; j++)
    {
        scanf("%d", &num);
        arrayA[j] = num;
        printf("Number #%d -> %d \n",j, arrayA[j]);
    }
    printf("\n");
    

    sortArray(arrayA, MAX);

    printf("SORTED: \n");
    for (int i = 1; i <= MAX; i++)
    {
        printf("%d ", arrayA[i]);
    }
    printf("\n");
    printf("\n");

    return 0;
}

void sortArray(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j+1])
            {
                swapIntegers(&array[j], &array[j+1]);
            }
        }
    }
}

void swapIntegers(int *a, int *b)
{
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp;
}