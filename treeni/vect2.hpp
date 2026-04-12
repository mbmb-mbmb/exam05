# pragma once

# include <ostream>

class vect2
{
	public:
		vect2();
		vect2(int x, int y);
		vect2(const vect2 &other);
		vect2 &operator=(const vect2 &other);
		~vect2();
	
	private:
		int	_x;
		int	_y;
};

std::ostream &operator<<(std::ostream &os, const vect2 &v);
