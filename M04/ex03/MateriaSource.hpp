/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:54:07 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/27 11:16:50 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MATERIA_SOURCE_HPP)
# define MATERIA_SOURCE_HPP
# include "IMateriaSource.hpp"
# define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*			_materia[MAX_MATERIA];
	public:
		MateriaSource();
		MateriaSource( MateriaSource const &materiaSourceCoppy );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const &materiaSourceCoppy );

		void				learnMateria( AMateria* );
		AMateria*			createMateria( std::string const & type );
};

#endif // MATERIA_SOURCE_HPP
