#include <stdio.h>

int main()
{
	char buf[] = "AT+CIMI\n460060003292398\n\nOK";
	char number[512];
	char str[512];
	sscanf(buf, "%[^0-9]%[0-9]",str, number);
	printf("%s\n",buf);
	printf("%s\n", number);
	return 0;
}
