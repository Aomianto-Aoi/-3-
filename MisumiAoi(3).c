#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name [] = {'M', 'i', 's', 'u', 'm', 'i', 'A', 'o', 'i', 'z'};
	int count = strlen(name);

	//	10->3進数化
	for(int i = 0; i < count; i++)
	{
		int a = name[i];
		int b = 0;
		int temp[5];
		while(a != 0)
		{
			temp[b] = a % 3;
			a = a / 3;
			b++;
		}
		for(int j = 4; j >= 0; j--)
			printf("%d",temp[j]);
		
		printf(" ");
	}
		
	puts("\n");

	return 0;
}
