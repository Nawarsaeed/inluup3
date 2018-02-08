#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void weekday(int n, char *name)
{
	char dagar[7][8]={"måndag","tisdag","onsdag","torsdag","fredag",
		"lördag","söndag"};
		//printf("%s\n",dagar[n]);
		//*name = arry[n];
		strcpy(name, dagar[n-1]);
	}
int main(int argc, char *argv[])
{
	int n= atoi(argv[1]);
	
	char name_of_day[8];
	
	weekday(n, name_of_day);
	
	printf("%s\n", name_of_day);
	
	return 0;
}
