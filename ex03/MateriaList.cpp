/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:16:59 by corellan          #+#    #+#             */
/*   Updated: 2023/06/12 23:42:55 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaList.hpp"

MateriaList::MateriaList(void)
{
	return ;
}

MateriaList::MateriaList(MateriaList const &rhs)
{
	MateriaList	*temp;
	MateriaList	*temp2;

	temp = &(static_cast<MateriaList>(rhs));
	temp2 = this;
	temp2->next = NULL;
	while (temp != NULL)
	{
		temp2->reserve = rhs.reserve->clone();
		temp = temp->next;
		if (temp != NULL)
		{
			temp2 = temp2->next;
			temp2 = new MateriaList();
		}
		temp2->next = NULL;
	}
	return ;
	
}

MateriaList::~MateriaList(void)
{
	return ;
}

MateriaList	&MateriaList::operator=(MateriaList const &rhs)
{
	
}