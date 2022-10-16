int	ft_strlen(char *str)
{
	int i;
	i = 0;
	char *tmp;
	tmp = str;

	while(*tmp != '\0')
	{
		i++;
		tmp++;		
	}
	return i;
}
