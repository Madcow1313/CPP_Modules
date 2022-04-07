#include "whatever.hpp"
/*
class Awesome 
{
	public:
		Awesome ():_n(0) {}
		Awesome(int n): _n(n) {}
		Awesome(Awesome &rhs): _n(rhs._n) {}
		bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
		bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
		bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
		bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); }
		bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n); }
		bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
		Awesome &operator=(Awesome const & rhs) { this->_n = rhs._n; return (*this); }
		int get_n() const { return (this->_n);}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream& o, Awesome const & rhs) { o << rhs.get_n(); return o; }
*/
int	main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
/*
	Awesome a(2);
	Awesome b(4);
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << "min( one, two ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( one, two ) = " << ::max( a, b ) << std::endl;
*/

	return 0;
}