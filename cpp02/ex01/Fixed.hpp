#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int			n;
	static const int fractional_bit = 8;
	
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		Fixed &operator=(const Fixed&);
		~Fixed();
		
		int			getRawBits(void) const;
		void		setRawBits(int const);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream &operator << (std::ostream& os, const Fixed& fixed);

#endif
