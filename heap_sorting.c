# include <stdio.h>
void swapping(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void heapify (int array [],int n,int i)
{
    int large = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && array[left] > array[large])
    {
        large = left;
    }
    if (right < n && array[right] > array[large])
    {
        large = right;
    }
    if (large != i)
    {
        swapping(&array[i],&array[large]);
        heapify(array,n,large);
    }
    
}
void heapsort (int array[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(array,n,i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swapping(&array[0],&array[i]);
        heapify(array,i,0);
    }
    
}
void array_printing(int *array, int n)
{
  printf("Printing the array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("Element no %d. = %d \n", i + 1, array[i]);
  }
}
int main ()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter the elements for the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The entered array: \n");
    array_printing(array,n);
    heapsort(array,n);
    printf("After sorting: \n");
    array_printing(array,n);
    return 0;
}