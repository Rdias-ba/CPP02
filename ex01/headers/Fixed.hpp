/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:02:11 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/05 04:27:10 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

			Fixed(void);
			Fixed(Fixed const &base);
			Fixed(const int myInt);
			Fixed(const float myFloat);
			~Fixed(void);

			Fixed &operator=(Fixed const &base);

			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat(void) const;
			int toInt(void) const;

	private:

			int rawBits;
			static int const fractional_bits = 8;

};

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

#endif