#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%s\n", __FILE__);
	printf("%d\n",
		__LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);

	system("pause");
	return 0;
}