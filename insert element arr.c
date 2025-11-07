#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, index_value, new_value;
    printf("Original values:\n");
    for(i=0; i<5; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nEnter index value from (0 to 4): ");
    scanf("%d", &index_value);
    printf("Enter new value: ");
    scanf("%d", &new_value);
    arr[index_value] = new_value;
    printf("\nAfter Modification:\n");
    for(i=0; i<5; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
