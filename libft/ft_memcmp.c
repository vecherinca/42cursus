/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:18:56 by mklimina          #+#    #+#             */
/*   Updated: 2022/11/25 18:44:58 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	unsigned int	i;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s_1[i] == s_2[i] && (i < n - 1))
	{
		i++;
	}
	return (s_1[i] - s_2[i]);
}
