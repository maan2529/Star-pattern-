 main()
{
for (int i = 1; i <= 4; i++)
{
    int num=1;
    for (int j = 1; j <= 3+i; j++)
    {
        if (j<=4-i)
        {
            printf(" ");
        }
        else
        {
        printf("%d",num);
        j<=3?num++:num--;
        }
        
    }
     printf("\n");
}

getch();
}