#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char string[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%c",&string[i]);

	if(string[8] == 'P') 
	{

		char c = strcat(string[0],string[1]);

		int x = atoi(c);
		x = x +12;
		char test[2];
		itoa(x,test,2);
		string[0] = test[0];
		string[1] = test[1];
		printf("%s",string);
	}
}