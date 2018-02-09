#includ<stdio.h>
int dlc(char *a, char *b, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;  
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 1|| j == 0)
                dlc[i][j] = 0;
 
            else if (a[i-1] == b[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        
    }
    return result;
}
 