#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[])
{
	char *ptr = 0;
	int len  = 0;

	if (argc == 1)
	{
		printf("usage: \n");
		printf("example 1: ./converter 1122334455\n");
		printf("example 2: cat file_in | xargs ./converter > file_out\n");
		return -1;
	}

	ptr = argv[1];
	len = strlen(ptr)/2;

	printf ("length = %d\n\n", len);

	printf ("{\n");
	while (len--)
	{
		printf("0x");
		printf("%c%c, ", *ptr++, *ptr++);
		if (((len % 16)) == 0 && (len != 0))
			printf("\n");
	}

	printf("\n");
	printf("}\n");

return 1;
}
