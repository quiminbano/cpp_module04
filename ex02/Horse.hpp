/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:10:08 by corellan          #+#    #+#             */
/*   Updated: 2023/06/15 15:04:52 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORSE_HPP
# define HORSE_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Horse : public AAnimal
{
public:

	Horse(void);
	Horse(std::string type);
	Horse(Horse const &rhs);
	~Horse(void);

	Horse	&operator=(Horse const &rhs);

	void	makeSound(void) const;
	void	printAddressBrain(void) const;
	void	printBrain(void) const;

private:

	Brain	*_brain;

};

#endif