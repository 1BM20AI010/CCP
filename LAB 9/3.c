#include<stdio.h>
int main()
{
	char feedback[40];
	FILE *fp;
	fp=fopen("BMSCE.txt","w");
	printf("Write something about BMSCE\n");
	fgets(feedback,200,stdin);
	fputs(feedback,fp);
	fclose(fp);
	fp=fopen("BMSCE.txt","r");
	printf("Data read from the file:\n");
	while(fgets(feedback,200,fp) != NULL)
	{
		printf("%s",feedback);
	}
	return 0;
}
