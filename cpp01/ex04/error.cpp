#include "sedForLoser.hpp"

int isprint(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

int	check_args(const char *file, const char *s1, const char *s2)
{
	if (!file || !s1 || !s2)
		return (1);
	if (!file[0] || !s1[0] || !s2[0])
		return (1);
	for (int i = 0; file[i]; i++)
		if (isprint(file[i]))
			return (1);
	for (int i = 0; s1[i]; i++)
		if (isprint(s1[i]))
			return (1);
	for (int i = 0; s2[i]; i++)
		if (isprint(s2[i]))
			return (1);
	return (0);
}
