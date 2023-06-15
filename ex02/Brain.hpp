/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:33:54 by corellan          #+#    #+#             */
/*   Updated: 2023/06/15 15:10:47 by corellan         ###   ########.fr       */
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
	Brain(std::string thoughts);
	Brain(Brain const &rhs);
	~Brain(void);

	Brain	&operator=(Brain const &rhs);

	std::string	getIdeas(int i) const;
	void		printIdeas(void);

private:

	std::string	_ideas[100];

};

#endif