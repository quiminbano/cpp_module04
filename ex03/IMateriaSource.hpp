/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:41:02 by corellan          #+#    #+#             */
/*   Updated: 2023/06/13 12:35:06 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "Ice.hpp"
# include "Cure.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) { }

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria 	*createMateria(std::string const &type) = 0;
};

#endif