int	ft_strcmp(char *s1, char *s2)
{
	unsigned char *ptr1 = (unsigned char*) s1;
	unsigned char *ptr2 = (unsigned char*) s2;

	while ((*ptr1 && *ptr2) && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);	
}
