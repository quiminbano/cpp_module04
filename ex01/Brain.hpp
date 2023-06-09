/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:33:54 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 18:48:14 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
public:

	Brain(void);
	Brain(Brain const &rhs);
	~Brain(void);

	Brain	&operator=(Brain const &rhs);

private:

	std::string	_ideas;

};

#endif