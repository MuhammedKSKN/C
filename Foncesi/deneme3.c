#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
    
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=5-i;k>=0 && j==1;k--)
			{
				printf(" ");
			}
			printf("* ");
		}
		printf("\n");
	}
    return 0;
}