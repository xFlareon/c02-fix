/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:16:33 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 15:16:33 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 32 && str[index] <= 126)))
			return (0);
		index++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "hfuefg7t$7658!';+";
// 	char	*str2 = "hfuefg7t$7658!';±";

// 	printf("%s affichable %d\n", str1, ft_str_is_printable(str1));	
// 	printf("%s affichable %d\n", str2, ft_str_is_printable(str2));
// } 