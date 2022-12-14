/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:43:41 by maria             #+#    #+#             */
/*   Updated: 2022/11/25 20:34:09 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The function strdup() is used to duplicate a string.
It returns a pointer to null-terminated byte string.
*/
char	*ft_strdup(const char *src)
{
	int		i;
	char	*output;
	int		len;

	len = ft_strlen(src);
	i = 0;
	output = malloc(sizeof(char) * len + 1);
	if (!output)
		return (0);
	while (src[i])
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
