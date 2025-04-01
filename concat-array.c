#include <stdio.h>
#include <conio.h>
int main()
{
    int size, size_2;
    // get the elements and size of first array
    printf("enter the size of first array \n");
    scanf("\n%d", &size);
    int a[size];

    printf("enter the %d elements in array\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("\n%d", &a[i]);
    }
    // get the elements and size of second array

    printf("enter the size of second array");
    scanf("%d", &size_2);

    int b[size_2];
    printf("enter the %d elements in array\n", size_2);
    for (int j = 0; j < size_2; j++)
    {
        scanf("\n%d", &b[j]);
    }
    // add the first element of first array with the first element of second array
    //  put the addition in the third array
    float c[size + size_2];
    for (int k = 0; k < size; k++)
    {
        c[k] = a[k] + b[k];
    }

    //    print the third array
    printf("the concated array is");
    for (int l = 0; l < size; l++)
    {
        printf("\n%d", c[l]);
    }
}