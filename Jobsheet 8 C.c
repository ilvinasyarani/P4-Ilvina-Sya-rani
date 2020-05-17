#include <stdio.h>
int main()
{
	char x[9],i;
	printf("ilvina sya'rani");
	printf("\nNIM : F1B019069");
	printf("\n===================\n\n");
	for(i=0;i<9;i++)
	{
		printf("masukan nilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<9;i++)
	{
	printf("nilai ke %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
