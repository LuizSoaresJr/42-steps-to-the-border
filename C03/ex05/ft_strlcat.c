#include<stdlib.h>
#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("char *dest, char *src, unsigned int size\n");
		return (1);	
	}

	unsigned int buff_size = atoi(argv[3]);
	//char *ptr = calloc(buff_size, sizeof(char));
	char *ptr_ft = calloc(buff_size, sizeof(char));

	strcpy(ptr_ft, argv[1]);

	unsigned int ft_strlcat_res = ft_strlcat(ptr_ft, argv[2], buff_size);

	printf("buffer: %s\tft_strlcat: %d\n", ptr_ft, ft_strlcat_res);

	free(ptr_ft);
	return(0);
}

int	ft_strlen(char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int total_len;

	dest_len = ft_strlen(dest);
	size -= dest_len;
	dest += dest_len;
	total_len = dest_len + ft_strlen(src);

	while (size > 0)
	{
		if (*src == 0)
		{
			*dest = 0;
			return (total_len);
		}
		*dest++ = *src++;
	        size--;	
	}
	*dest = 0;
	return (total_len);	
}

int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

/*
 * Luiz = 4 bits + 1 null
 * Fernando = 8 bits + 1 null
 * buffer = 14 bits
 * result = 12 bits
 */
