#include <stdio.h>

int main(int argc, char **argv)
{
      int a[] = {23, 5, 4, 20, 39, 88, 6, 25, 92, 1};
      int *p = a;

          printf("%d is the same as %d\n", *p, a[0]);
          printf("%d is the same as %d\n", *(p + 4), a[4]);
          printf("%d is the same as %d is the same as %d\n", *(p + 6), a[6], *(a + 6));
          printf("%d is the same as %d is the same as %d is the same as %d\n", *(p + 9), a[9], *(a + 9), *(9 + a));

          /* you can also increment a pointer with p++! */
          int i;
          for (i = 0; i < 10; i++)
              printf("element number %d: %d\n", i, *p++);
              /* but you can't do this with an array :( */

              /* observe that now p points to one past the last element of the array */
              printf("last element: %d\nwhat p points to (not defined by us): %d\n", *(p - 1), *p);

          return 0;
}
