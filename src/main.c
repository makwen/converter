#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[])
{
	char *ptr = 0;
	int len  = 0;

	if (argc == 1)
	{
		printf("usage: \r\n");
		printf("example 1: ./converter 1122334455\r\n");
		printf("example 2: cat file_in | xargs ./converter > file_out\r\n");
		return -1;
	}

	ptr = argv[1];
	len = strlen(ptr)/2;

	printf ("length = %d\r\n\r\n", len);

	printf ("{\r\n");
	while (len--)
	{
		printf("0x");
		printf("%c", *ptr++);
		printf("%c,", *ptr++);
		if (((len % 16)) == 0 && (len != 0))
			printf("\r\n");
	}

	printf("\r\n");
	printf("},\r\n");

return 1;
}
