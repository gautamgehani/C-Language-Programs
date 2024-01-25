/* Program made by Gautam Gehani */
#include <stdio.h>
int main()
{
    int arr[100];
    int i, item, pos, size;
    int x=-1,key;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    // reading array
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    // print the original array
    printf("Array before insertion: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n ", arr[i]);
        printf("\n");
    }
    // read element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    // read position at which element is to be inserted
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
 
    // increase the size
    size++;
 
    // shift elements forward
    for (i = size-1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
        // insert item at position
        arr[pos - 1] = item;
    }
    // print the updated array
    printf("Array after insertion: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("Enter element to delete: ");
    scanf("%d",&key);
    // traverse the array
    // if any element matches the key, store its position
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            x = i;
            break;
        }
    }
    if(x != -1)
    {
        //shift elements backwards by one position
        for(i = x; i < size - 1; i++)
            arr[i] = arr[i+1];
        printf("Array after deletion: ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");
    return 0;

}