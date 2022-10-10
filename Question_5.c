//    *
//   ***
//  *****
// *******

main()
{
for (int i = 1; i <= 4; i++)
{
   for (int j = 1; j <= 3+i; j++)
   {
    if (j<=4-i)
    {
        printf(" ");
    }
    else
    {
        printf("*");
    }
   }
   printf("\n");
}

getch();
}

