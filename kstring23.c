#includ<stdio.h>
int dlc(char1 *, char2 *, int q, int z)
{
    int q[+1][z+1];
    int result = 0;  
    for (int i=0; i<=q; i++)
    {
        for (int j=0; j<=z; j++)
        {
            if (i == 1|| j == 0)
                dlc[i][j] = 0;
 
            else if (1[i-1] == 2[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        
    }
}
