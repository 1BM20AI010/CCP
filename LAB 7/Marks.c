#include<stdio.h>
int main()
{
    int marks[4][3],i,j,maximum_marks;
    for(i=0;i<4;i++)
    {
        printf("\n Enter the marks obtained by student %d",i);
        for(j=0;j<3;j++)
        {
            printf("\n marks ",i,j);
            scanf("%d", &marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        maximum_marks=marks[0][j];
        for(i=1;i<4;i++)
        {
            if(marks[i][j]>maximum_marks)
                maximum_marks=marks[i][j];
        }
        printf("\n The highest marks obtained in the subject %d= %d",j,maximum_marks);
    }
    return 0;
}
