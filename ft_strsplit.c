/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:28:23 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 00:46:55 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	till_c_len(const char *word, char c)
{
	int	x;

	x = 0;
	while (*word != c && *word != '\0')
	{
		word++;
		x++;
	}
	return (x);
}

static char	*get_word(const char *s, char c, int *x)
{
	char	*str;
	char	*tmp;

	str = (char *)malloc((till_c_len(s, c) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	tmp = str;
	while (s[*x] != c && s[*x] != '\0')
	{
		*tmp++ = s[*x];
		*x += 1;
	}
	*tmp = '\0';
	return (str);
}

static void	*add_strings(char const *s, char **ptrptr, char c)
{
	int		x;
	char	**tmp;

	tmp = ptrptr;
	while (*s != '\0' )
	{
		while (*s == c)
			s++;
		x = 0;
		if (*s != '\0')
		{
			*tmp = get_word(s, c, &x);
			if (!tmp)
				return (ft_free_strptr(ptrptr));
			tmp++;
		}
		s += x;
	}
	*tmp = 0;
	return (ptrptr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**strptr;

	if (!s)
		return (NULL);
	strptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strptr)
		return (NULL);
	return (add_strings(s, strptr, c));
}
