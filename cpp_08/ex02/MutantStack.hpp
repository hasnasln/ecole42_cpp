#ifndef MutantStackK_HPP
# define MutantStackK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;
};

#include "MutantStack.tpp"

#endif //MutantStackK_HPP
