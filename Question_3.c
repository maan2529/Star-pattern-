main()
{
    int i,j;
for ( i = 4; i >= 1; i--)
{
    for ( j = 1; j <=4; j++)
    {
        if (1<=i-j)
            printf(" ");
        else
             printf("*");
    }
    printf("\n");
}

getch();
}
