#include <iostream>
#include <iomanip>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void announce (void);
		std::string get_Zombie_name() const;

	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );