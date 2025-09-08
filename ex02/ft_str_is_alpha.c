/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:45:06 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 14:45:06 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z')
				|| (str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "alors";
// 	char	*str2 = "A1lors";

// 	printf("%s maj ; %d\n", str1, ft_str_is_alpha(str1));	
// 	printf("%s maj ; %d\n", str2, ft_str_is_alpha(str2));	
// } 