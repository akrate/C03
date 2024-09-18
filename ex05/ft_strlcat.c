/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:53:21 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/19 00:06:59 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		dlen;
	unsigned int		slen;
	unsigned int		i;
	unsigned int		res;

	res = 0;
	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (size + slen);
	else
		res = slen + dlen;
	while (src[i] && dlen < size - 1)
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (res);
}
/*int main()
{
	char q[] = "";
	char w[10] = "";
	char x[10] = "";
	
	printf("%d = %s\n",(int)ft_strlcat(w, q, 10), w);
	 printf("%ld = %s\n",strlcat(x, q, 10), x);
}*/
