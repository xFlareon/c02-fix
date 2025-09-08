/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:57:08 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 14:57:08 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= '0') && (str[index] <= '9')))
			return (0);
		index++;
	}
	return (1);
}

// int	main(void)
// {
// 		char	*str1 = "15450h7448";
// 	printf("%s maj ; %d\n", str1, ft_str_is_numeric(str1));
// } 