#include<string.h>
#include<stdio.h>

int main()
{
        char *str=NULL;
	
	str = (char *)malloc(sizeof(char));

        printf("enter a string::\n");
        gets(str);
	int i=0,count=1;
	int j;
	int l;
	l=strlen(str);

	for(i=0;i<l;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
			if(str[i] == str[j])
			{	
					
				count++;	
				str[j]='0';
			
				
			}

		}
		
		if(str[i]!='0')	
			printf("%c=%d\n",str[i],count);
		
	}
}
