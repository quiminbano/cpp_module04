/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:08:42 by corellan          #+#    #+#             */
/*   Updated: 2023/06/12 23:54:35 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALIST_HPP
# define MATERIALIST_HPP

# include "Ice.hpp"
# include "Cure.hpp"

class MateriaList
{
	public:

		AMateria	*reserve;
		MateriaList	*next;

		MateriaList(void);
		MateriaList(MateriaList const &rhs);
		~MateriaList(void);

		MateriaList	&operator=(MateriaList const &rhs);

		int		sizeList(void);
		void	addNode(AMateria *ptr);
		void	deleteLast(void);
};

#endif