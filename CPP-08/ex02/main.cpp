#include "MutantStack.hpp"
#include <list>
#include <algorithm>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "standard container list" << std::endl;
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);
	std::list<int>::iterator it2 = lstack.begin();
	std::list<int>::iterator ite2 = lstack.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}

	std::cout << "some tests" << std::endl;

	std::sort(mstack.begin(), mstack.end());
	MutantStack<int>::iterator it3 = mstack.begin();
	MutantStack<int>::iterator ite3 = mstack.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	if (!mstack.empty())
		std::cout << "MutantStack is not empty" << std::endl;

	MutantStack<int> secondstack(mstack);

	if (secondstack == mstack)
		std::cout << "stacks are equal" << std::endl;
	
	secondstack[1] = 100;
	if (secondstack == mstack)
		std::cout << "stacks are equal" << std::endl;
	else
		std::cout << "stacks are not equal" << std::endl;

	MutantStack<int>::iterator it4 = secondstack.begin();
	MutantStack<int>::iterator ite4 = secondstack.end();
	while (it4 != ite4)
	{
		std::cout << *it4 << std::endl;
		++it4;
	}

	return 0;
}