#include<stdio.h>

int main()
{
    int array[100], position, c, n;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else 
        for(c = position-1; c < n-1; c++)
        array[c] = array[c+1];

    printf("\n\nResultant array is: ");
    for(c = 0; c < n-1; c++) 
        printf("%d  ", array[c]);
    return 0;
}
