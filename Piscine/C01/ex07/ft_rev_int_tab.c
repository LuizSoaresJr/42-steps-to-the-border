void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	tmp = 0;
	int i;
	i = 0;

	while (i < size)
	{
		tmp = *tab;
		*tab = *(tab + size - 1);
	
		i++;
	}
}


("mount" the array inside the function)


what tools we have?
	the size of the array
	the adress of the first element

How can the values switch places?
	create a temp variable to store an element
	switch places
	put the temp value back on track

There is another way?
	
what tools do we need?
	a loop
