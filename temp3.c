#include <stdio.h>


#define count 6

int main()
 {
        int space;
        int index = 0;

        for (size_t row = 1; row < count; row++)
        {


                if (row %2 == 0)
                        continue;
                index++;
                for(space=1;space<count-index;space++)
           {
               printf("  ");
           }
                for (size_t col = 0; col < row; col++)
                {
                        if (col == index-1)
                                printf("%d ", index);

                        else
                                printf("%c ", '*');
                }
                printf("\n");
        }
        return 0;
}
