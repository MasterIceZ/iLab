void drawtable()
{
    int i,j;
    for(i=1; i<=tablei; i++)
    {
        for(j=1; j<=tablej; j++)
        {
            printf("%c",table[i][j]);
        }
        printf("\n");
    }
}
