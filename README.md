#include <stdio.h>

int main()
{
	int a[][4]={{1,2,3,4},{5,6,7,8},{9,8,7,6},{5,4,3,2}};
	int i,j;
	FILE *fp;
	fp=fopen("output.txt","wt");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++){
		fprintf(fp,"%d\t",a[i][j]);
		}
	}
	return 0;
}
