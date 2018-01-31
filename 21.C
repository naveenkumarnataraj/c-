#include <stdio.h>
int main() 
{
  
  int a,b, terms, value, sum=0, i;
   printf("Enter the number of terms in AP series\n");
    scanf("%d", &terms);
  printf("Enter first term and common difference of AP series\n");
    scanf("%d %d", &a, &b);
 
    /* print the series and add all elements to sum */
    value = first;
    printf("AP SERIES\n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value + b;
    }
 
    printf("\nSum of the AP series till %d terms is %d\n", terms, sum);
 
    getch();
 return 0;
}
