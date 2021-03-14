/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:24:31 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/14 19:10:54 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

# include <iostream>
# include <cstdlib>

class Base	{ public: virtual ~Base(void){} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif
