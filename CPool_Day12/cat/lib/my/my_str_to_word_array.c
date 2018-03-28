#include <stdio.h>
#include <stdlib.h>
char *my_strncat(char *,char const*);
int my_strlen(char const*);
int is_alphanumeric(char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
		return 1;
	}
	else
		return 0;
	return 0;
}
char **my_str_to_word_array(char const *str)
{
	char **re;
	int end = 0;
	int end_flag = 0;
	int i = 0;
	int j = 0;
	re = malloc(sizeof(char*) * (my_strlen(str) + 1));
	re[0] = malloc(sizeof(char) * (my_strlen(str) + 1));
	while(str[end])
	{
		if(is_alphanumeric(str[end])){
			end_flag = 1;
			re[i][j] = str[end];
			j++;
		}
		else{
			if(end_flag == 1){
				re[i + 1] = malloc(sizeof(char) * (my_strlen(str) + 1));
				i++;
				j = 0;
				end_flag = 0;
			}
		}
		end++;
	}
	return re;
}
