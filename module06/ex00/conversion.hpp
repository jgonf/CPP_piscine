/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:32:07 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/12 10:45:39 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <iostream>
# include <stdlib.h>
# include <limits>

# define INT_MAX std::numeric_limits<int>::max()
# define INT_MIN std::numeric_limits<int>::min()

typedef void (display_arg)(char* arg);

void	display_char(char* arg);
void	display_int(char* arg);
void	display_float(char* arg);
void	display_double(char* arg);

#endif
