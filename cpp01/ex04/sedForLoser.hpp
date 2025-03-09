#ifndef SEDFORLOSERS_H
#define SEDFORLOSERS_H

#include <iostream>
#include <fstream>
#include <iomanip>


std::string strReplace(std::string &line, const char *s1, const char *s2);
int isprint(char c);
int	check_args(const char *file, const char *s1, const char *s2);

#endif
