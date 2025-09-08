/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:39:19 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 14:39:19 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z')))
			return (0);
		index++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	*str1 = "aledar";
	char	*str2 = "Aledar";

	printf("%s minus ;%d\n", str1, ft_str_is_lowercase(str1));	
	printf("%s minus ; %d\n", str2, ft_str_is_lowercase(str2));
} */