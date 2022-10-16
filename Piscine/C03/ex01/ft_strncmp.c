int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char *ptr1 = (unsigned char*) s1;
	unsigned char *ptr2 = (unsigned char*) s2;

	while(((*ptr1 && *ptr2) && (*ptr1 == *ptr2)) && n > 1)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return(*ptr1 - *ptr2);

}
