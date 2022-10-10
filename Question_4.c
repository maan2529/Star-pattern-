// rewrite & condition incomplete....
// *******
//  *****
//   ***
//    *

main()
{
for (int i = 0; i < 4; i++)
{
   
     for (int  j = 1; j <= i; j++)
     {
        printf(" ");
     }
     for (int k = 1; k <= 7-2*i; k++)
     {
       printf("*");
     }
   
    printf("\n");
}

getch();
}