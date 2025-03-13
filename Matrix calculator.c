#include <stdio.h>
int main()
{

    int rows, cols, i, j, x, y;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows!=cols)
    {
        printf("INVALID");
    }
    else{
    int matrix[rows + 1][cols + 1];
    printf("Enter elements of the matrix:\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter position (row and column) to calculate co factor: ");
    scanf("%d %d", &x, &y);

    printf("Minor of element at position (%d, %d):\n", x, y);
    int a = 1, b = 1;
    int arr2[rows][cols];

    for (int i = 1; i <= rows; ++i)
    {
        if (i == x)
        {
            continue;
        }
        for (int j = 1; j <= cols; ++j)
        {
            if (j == y)
            {
                continue;
            }
            arr2[a][b] = matrix[i][j];
            b++;
        }
        a++;
        b = 1;
    }
    for (int i = 1; i < rows; ++i)
    {

        for (int j = 1; j < cols; ++j)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int mainDia = 1, secDia = 1;
    for (int i = 1; i < rows; ++i)
    {

        for (int j = 1; j < cols; ++j)
        {
            if (i == j)
            {
                mainDia = mainDia * arr2[i][j];
            }
        }
    }
    printf("\nmain diagonal = %d\n", mainDia);
    for (int i = 1; i < rows; ++i)
    {

        for (int j = 1; j < cols; ++j)
        {
            if (j == cols - i)
            {
                secDia = secDia * arr2[i][j];
            }
        }
    }
    printf("secondary diagonal = %d\n", secDia);
    int power = x + y;
    int sign = 1;
    for (int i = 0; i < power; ++i)
    {
        sign = sign * (-1);
    }
    int ans = sign * (mainDia - secDia);
    int asn = (mainDia - secDia);

    printf("\nMinor = %d\n", asn);
    printf("co factor = %d\n", ans);

    }
    getch();
    return 0;
}