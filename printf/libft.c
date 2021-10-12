/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:14:32 by vnazioze          #+#    #+#             */
/*   Updated: 2021/10/11 17:14:35 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *destiny, const char *source, size_t destiny_size)
{
	size_t	source_size;
	size_t	index;

	if ((destiny || source) == 0)
		return (0);
	source_size = ft_strlen(source);
	index = 0;
	if (destiny_size > 0)
	{
		while (source[index] != '\0' && index < (destiny_size - 1))
		{
			destiny[index] = source[index];
			index++;
		}
		destiny[index] = '\0';
	}
	return (source_size);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == NULL || s2 == NULL || new_string == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			new_string[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_string[i] = s2[j];
			i++;
			j++;
		}
		new_string[i] = '\0';
	}
	return (new_string);
}

char	*ft_convert_base(size_t n, char *base)
{
	int		base_len;
	int		len;
	char	*n_base;
	size_t	aux;

	base_len = ft_strlen(base);
	len = 0;
	aux = n;
	if (n == 0)
		len = 1;
	while (aux != 0)
	{
		aux /= base_len;
		len++;
	}
	n_base = (char *)malloc((len + 1) * sizeof(*base));
	if (!n_base)
		return (NULL);
	n_base[len] = '\0';
	while (len--)
	{
		n_base[len] = base[n % (size_t)base_len];
		n /= (size_t)base_len;
	}
	return (n_base);
}

char	*ft_uitoa(unsigned int unsigned_number)
{
	char			*string;
	int				index;
	unsigned int	auxiliary;

	auxiliary = unsigned_number;
	index = 0;
	if (unsigned_number == 0)
		index = 1;
	while (auxiliary != 0)
	{
		auxiliary /= 10;
		index++;
	}	
	string = (char *)malloc((index + 1) * sizeof(*string));
	if (!string)
		return (NULL);
	string[index] = '\0';
	while (index > 0)
	{
		index--;
		string[index] = (unsigned_number % 10) + '0';
		unsigned_number /= 10;
	}
	return (string);
}
