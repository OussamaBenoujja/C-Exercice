#include <stdio.h>
 
int fi(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fi(n-1) + fi(n-2));
}
 
int main()
{
  int nbr, i = 0, j;
 
  printf("Entrez le nombre\n");
  scanf("%d", &nbr);

  for (j = 1; j <= nbr; j++)
  {
    printf("%d\n", fi(i));
    i++;
  }
 
  return 0;
}