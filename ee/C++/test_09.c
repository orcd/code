#include <stdio.h>

int main()
{
	int x=0,y=0;//长和宽
	int count=0;
	int size;
	int** buff;
	int direct=1;

	printf("input size: ");
	scanf("%d",&size);

	buff = (int**)malloc(sizeof(int*)*size);
	for(int i=0; i<size; i++)
	{
		buff[i] = (int*)malloc(sizeof(int)*size);
	}

	for(int i=0; i<size; i++)
	{
		for(int k=i; k<size; k++)
		{
			buff[y][x] = count++;
			direct? x++ : x--;
		}
		direct? (--x,++y) : (++x,--y);

		for(int k=i; k<size-1; k++)
		{
			buff[y][x] = count++;
			direct? y++:y--;
		}
		direct? (--y,--x):(++y,++x);

		direct = !direct;
	}

	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%4d ",buff[i][j]);
		}
		printf("\n");
	}

	return 0;
}