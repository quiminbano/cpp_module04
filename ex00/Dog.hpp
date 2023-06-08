/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:08:07 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 14:36:04 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:

	Dog(void);
	Dog(std::string type);
	Dog(Dog const &rhs);
	~Dog(void);

	Dog	&operator=(Dog const &rhs);

	void	makeSound(void);

};

#endif