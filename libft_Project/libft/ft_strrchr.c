/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:06 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/21 18:47:52 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			term;
	const char	*ptr;

	ptr = s;
	term = *ptr;
	while (*ptr++)
		;
	while (*ptr != term && *ptr != c)
		ptr--;
	if (*ptr == c)
		return ((char *)ptr);
	else
		return (0);
}
