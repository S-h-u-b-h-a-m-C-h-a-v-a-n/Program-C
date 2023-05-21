#include <stdio.h>

#define count 6

int main()
{
        int row,col;
        int index = 0;
        for ( row = 1; row < count; row++) {
                if (row %2 == 0)
                        continue;
                index++;
                for ( col = 0; col < row; col++)
                {
                      /*  if (col == index-1)
                                printf("%d ", index);

                        else
                        */

                                printf("%c ", '*');
                }

                printf("\n");
        }
        return 0;
}
