#include "libft.h"

unsigned int	get_nbr(char c, char *base)
{
	unsigned int	i;

	i = 0;
	while (ft_toupper(base[i])
		&& ft_toupper(base[i]) != ft_toupper(c))
		i++;
	return (i);
}

unsigned int	ft_atoi_base(const char *nptr, char *base)
{
	unsigned int	result;
	size_t			i;
	size_t			base_len;

	i = 0;
	result = 0;
	base_len = ft_strlen(base);
	if (ft_strnstr(nptr, "0x", ft_strlen(nptr)) != NULL)
		i = 2;
	if (i <= ft_strlen(nptr))
	{
		while (nptr[i])
		{
			result = result * base_len + get_nbr(nptr[i], base);
			i++;
		}
	}
	return (result);
}
