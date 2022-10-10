//     5
//    4 6
//   3 5 7
//  2 4 6 8
// 1 3 5 7 9
#include <stdio.h>

int main()
{
   for (int i=0; i<=5; i++)
   {
       for (int j=1; j<=5;j++)
       {
           if(j<=5-i)
           {
           printf(" ");
           }
           else
           {
           printf("*");
           printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}
