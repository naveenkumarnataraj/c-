##include <stdio.h>
 int main()
{
  int array[100], min, s, c, location = 1;
  printf("Enter the number of elements in array\n");
  scanf("%d", &s);
 printf("Enter %d integers\n", size);
 for (c = 0; c < s; c++)
    scanf("%d", &array[c]);
  min = array[0];
 
  for (c = 1; c < s; c++)
  {
    if (array[c]<min)
    {
       min= array[c];
       location = c+1;
    }
  }
 
  printf("Min element is present at location %d and it's value is %d.\n", location, min);
  return 0;
}
