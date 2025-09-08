/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfernan <adfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:17:38 by adfernan          #+#    #+#             */
/*   Updated: 2025/09/04 14:35:04 by adfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src [index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "hop";
// 	char	src[] = "aled";

// 	printf("dest before: %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("dest after: %s\n", dest);
// } 