#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void my_gets(char *str, int n, FILE *stream)
{
	char *temp_str;
	temp_str = (char*)malloc(sizeof(char)*n);
	
	fgets(temp_str, n, stream);
	strncpy(str, temp_str, strlen(temp_str)-1);
	*(str+strlen(str)) = '\0';
	
	free(temp_str);
}
