/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:16:57 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 15:47:11 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class	Fixed{
	private:
		int	_N;
		static int const fract = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & src);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
