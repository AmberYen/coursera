#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	char b[20];
	
	gets(a);
	gets(b);

	
	int i;
	for (i=0;a[i] != '\0';i++)
	{
		if (a[i]>='A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32 ;
		}
	}

	for (i=0;b[i] != '\0';i++)
	{
		if (b[i]>='A' && b[i] <= 'Z')
		{
			b[i] = b[i] + 32 ;
		}
	}

	// printf("%s %s",a,b);
	if (strcmp(a,b) == 0)
	{
		printf("%c\n",'=');
	}
	else if (strcmp(a,b) < 0)
	{
		printf("%c\n",'<');
	}
	else
	{
		printf("%c\n",'>');
	}
	
	return 0;
}