/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:02:11 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/05 07:12:27 by rdias-ba         ###   ########.fr       */
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
			Fixed(const Fixed &base);
			Fixed(const int myInt);
			Fixed(const float myFloat);
			~Fixed(void);

			Fixed &operator=(const Fixed &base);
			
			bool operator>(const Fixed &base);
			bool operator<(const Fixed &base);
			bool operator>=(const Fixed &base);
			bool operator<=(const Fixed &base);
			bool operator==(const Fixed &base);
			bool operator!=(const Fixed &base);
			Fixed operator+(const Fixed &base);
			Fixed operator-(const Fixed &base);
			Fixed operator*(const Fixed &base);
			Fixed operator/(const Fixed &base);
			Fixed &operator++(void);
			Fixed &operator--(void);
			Fixed operator++(int);
			Fixed operator--(int);

			int getRawBits(void) const;
			void setRawBits(const int raw);
			float toFloat(void) const;
			int toInt(void) const;
			static Fixed& min(Fixed &a, Fixed &b);
			static const Fixed& min(const Fixed &a, const Fixed &b);
			static Fixed& max(Fixed &a, Fixed &b);
			static const Fixed& max(const Fixed &a, const Fixed &b);

	private:

			int rawBits;
			static int const fractional_bits = 8;

};

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

#endif