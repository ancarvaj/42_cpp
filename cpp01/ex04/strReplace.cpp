#include "sedForLoser.hpp"

std::string strReplace(std::string &line, const char *s1, const char *s2)
{
	std::string replace;

	for (int i=0; line[i]; i++)
	{
		if (line[i] == s1[0])
		{
			for (int j = 0; s1[j] == line[i + j]; j++)
			{
				if (!s1[j + 1] && s1[j] == line[i + j])
				{
					replace.append(s2);
					i+=j;
				}
			}
		}
		else
			replace.append(1, line[i]);
	}
	return (replace);
}
