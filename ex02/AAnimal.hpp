/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:07:52 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 13:01:41 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
public:

	AAnimal(void);
	AAnimal(AAnimal const &rhs);
	AAnimal(std::string type);
	virtual ~AAnimal(void);

	AAnimal	&operator=(AAnimal const &rhs);

	virtual void	makeSound(void) const = 0;
	virtual void	printAddressBrain(void) const = 0;

	std::string	getType(void) const;

protected:

	std::string	_type;

};

#endif
