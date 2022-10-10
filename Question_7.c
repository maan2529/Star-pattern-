// ABCDCBA  space 0
// ABC CBA  space 1
// AB   BA  space 3
// A     A  space 5


main()
{  
for (int i = 1; i <= 4; i++)
{
  char A='A';
  for (int j = 1; j <= 7; j++)
  {
    if (j<=5-i || j>=3+i)
    {
      printf("%c",A);

        j<4?A++:A--;
    }
    else
    {
      printf(" ");
      if (j==4)
      {
        A--;
      }
      
    }
  }
  printf("\n");
}

getch();
}