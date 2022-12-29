#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 0;

    while(i <= 50)
    {
      i++;

      if((i % 2) == 0)
      {
          printf(" %d ",i);
      }
    }

    return 0;
}
