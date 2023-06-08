/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:07:52 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 14:28:51 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
public:

	Animal(void);
	Animal(Animal const &rhs);
	Animal(std::string type);
	~Animal(void);

	Animal	&operator=(Animal const &rhs);

	virtual void	makeSound(void);

protected:

	std::string	_type;

};

#endif