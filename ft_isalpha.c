/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:16:18 by maria             #+#    #+#             */
/*   Updated: 2022/10/26 23:48:13 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isalpha(int c)
{
    int i;
    if ((c >= 65 && c<= 90) ||(c >= 97 && c<= 122))
        return(1);
    else
        return(0);
}

int main(void)
{
    char c;
    c = '-';
    printf("%d\n", isalpha(c));
    printf("%d", ft_isalpha(c));
}