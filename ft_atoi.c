/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaltif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:34:11 by moaltif           #+#    #+#             */
/*   Updated: 2026/10/30 11:34:12 by moaltif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long		res;
	int			sign;
	const char	*str = nptr;

	res = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (res > 2147483647 && sign > 0)
			return (-1);
		else if ((res * sign) < -2147483648)
			return (0);
		str++;
	}
	return (res * sign);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n",ft_atoi("2147483647"));
//     printf("%d\n",atoi("2147483647"));
// }