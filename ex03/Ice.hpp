/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:25:50 by corellan          #+#    #+#             */
/*   Updated: 2023/06/12 13:55:19 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &rhs);
		~Ice(void);

		Ice	&operator=(Ice const &rhs);

		AMateria	*clone(void) const;
};

#endif