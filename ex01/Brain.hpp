/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:16:03 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 14:47:09 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
public:
	
	Brain(void);
	Brain(Brain const &rhs);
	~Brain(void);

	Brain	&operator=(Brain const &rhs);

private:

	std::string	_ideas[100];

};

#endif