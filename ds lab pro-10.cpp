#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i, element;
    printf("Enter 5 Array Elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter Element to Insert: ");
    scanf("%d", &element);
    arr[i] = element;
    printf("\nThe New Array is:\n");
    for(i=0; i<6; i++)
        printf("%d  ", arr[i]);
    getch();
    return 0;
}
