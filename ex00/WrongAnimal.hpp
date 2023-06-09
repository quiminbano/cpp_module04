/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:20:20 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 16:23:30 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &rhs);
	WrongAnimal(std::string type);
	~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	void	makeSound(void) const;

	std::string	getType(void) const;

protected:

	std::string	_type;

};

#endif