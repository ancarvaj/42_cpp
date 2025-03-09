#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	int			n;
	static const int fractional_bit = 8;
	
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed &operator=(const Fixed&);
		~Fixed();
		
		int			getRawBits(void) const;
		void		setRawBits(int const);

		
};

#endif
