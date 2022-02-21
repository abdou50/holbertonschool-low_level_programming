#include "main.h"
char *_strchr(char *s, char c)
{
	int i , k, m;
	char  *l[100];

	k = strlen(s); 
	for(i = 0; i < k; i++)
	{
		if (s[i] == c)
		{ 
			for (m = i ; m < k; m++)
			{
				*l[i] = s[i];
			}
			break; 
		}
	}
	if  (i = k)
	{
		*l = 0;
	}
return (*l);
}
