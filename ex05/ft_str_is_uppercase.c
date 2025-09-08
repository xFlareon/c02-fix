/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:19:14 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 15:19:14 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "ALED";
// 	char	*str2 = "AlED";

// 	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1));	
// 	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
// } 