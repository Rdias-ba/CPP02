/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:02:11 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/01 16:29:00 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

			Fixed(void);
			Fixed(Fixed const &base);
			~Fixed(void);

			Fixed &operator=(Fixed const &base);

			int getRawBits(void) const;
			void setRawBits(int const raw);

	private:

			int rawBits;
			static int const fractional_bits = 8;

};

#endif