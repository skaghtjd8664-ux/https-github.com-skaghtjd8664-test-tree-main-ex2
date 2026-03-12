#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap_case(char* str)	
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z')) //대문자인 경우 32더해서 소문자로 바꿈
		{
			str[i] = str[i] + 32;
		}
		else if(str[i] >= 'a' && str[i] <= 'z')//소문자인 경우 32빼서 대문자로 바꿈
		{
			str[i] = str[i] - 32;
		}
		else 
		{
			str[i] = str[i];
		}
		i++;
	}
}

int main()
{
	char str[100];

	printf("input: ");
	scanf_s("%[^\n]s", &str);

	swap_case(str);
	printf("output: %s", str);

	return 0;
}