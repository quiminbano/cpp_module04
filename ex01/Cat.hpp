/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:08:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 14:40:44 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:

	Cat(void);
	Cat(std::string type);
	Cat(Cat const &rhs);
	~Cat(void);

	Cat	&operator=(Cat const &rhs);

	void	makeSound(void) const;

private:

	Brain	*_brain;

};

#endif