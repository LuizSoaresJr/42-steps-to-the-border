#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *ft_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);

	int new_dest_len = strlen(argv[1]) + strlen(argv[2]) + 1;
	
	char *ptr_dest = (char *) calloc(new_dest_len, sizeof(char));
	char *ptr_dest_ft = (char *) calloc(new_dest_len, sizeof(char));

	ptr_dest = strcat(argv[1], argv[2]);

	printf("%s\n", ptr_dest);

	ptr_dest_ft = ft_strcat(argv[1], argv[2]);

	printf("%s\n", ptr_dest_ft);

	free(ptr_dest);
	free(ptr_dest_ft);

	return(0);
}
