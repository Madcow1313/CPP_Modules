#include <iostream>
#include <iomanip>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void announce (void);
		std::string get_Zombie_name() const;
		void set_Zombie_name( std::string name );
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie	*zombieHorde( int N, std::string name);