/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:08:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 15:01:40 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:

	Cat(void);
	Cat(std::string type);
	Cat(Cat const &rhs);
	~Cat(void);

	Cat	&operator=(Cat const &rhs);

	void					makeSound(void) const;
	void					printAddressBrain(void) const;
	void					printBrain(void) const;
	const std::type_info	&getTypeOfClass(void) const;

private:

	Brain	*_brain;
	
};

#endif