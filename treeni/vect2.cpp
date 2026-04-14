# include "vect2.hpp"

vect2::vect2() :  _x(0), _y(0) {}
vect2::vect2(int x, int y) : _x(x), _y(y){}
vect2::vect2(const vect2 &other) : _x(other._x), _y(other._y){}

vect2 &vect2::operator=(const vect2 &other)
{
	if(this != &other)
	{
		this->_x = other._x;
		this->_y = other._y;
	}
	return *this;
}

vect2::~vect2(){}

int &vect2::operator[](int index)
{
	if (index == 0)
		return _x;
	return _y;
}

const int &vect2::operator[](int index) const
{
	if (index == 0)
		return _x;
	return _y;
}

vect2 &vect2::operator++()
{
	this->_x++;
	this->_y++;
	return *this;
}

vect2 &vect2::operator--()
{
	this->_x--;
	this->_y--;
	return *this;
}

vect2 vect2::operator++(int)
{
	vect2 old(*this);
	++_x;
	++_y;
	return old;
}

vect2 vect2::operator--(int)
{
	vect2 old(*this);
	--_x;
	--_y;
	return old;
}

vect2 &vect2::operator+=(const vect2 &other)
{
	this->_x += other._x;
	this->_y += other._y;
	return *this;
}

vect2 &vect2::operator-=(const vect2 &other)
{
	this->_x -= other._x;
	this->_y -= other._y;
	return *this;
}

vect2 &vect2::operator*=(int num)
{
	this->_x *= num;
	this->_y *= num;
	return *this;
}

vect2 vect2::operator+(const vect2 &other) const
{
	vect2 out;
	out[0] = this->_x + other._x;
	out[1] = this->_y + other._y;
	return out;
}

vect2 vect2::operator-(const vect2 &other) const
{
	vect2 out;
	out[0] = this->_x - other._x;
	out[1] = this->_y - other._y;
	return out;

}

vect2 vect2::operator-() const
{
	vect2 out;
	out._x = -_x;
	out._y = -_y;
	return out;
}

vect2 vect2::operator*(int num) const
{
	vect2 out;
	out[0] = this->_x * num;
	out[1] = this->_y * num;
	return out;
}

bool vect2::operator==(const vect2 &other) const
{
	if (this->_x == other._x && this->_y == other._y)
		return true;
	return false;
}

bool vect2::operator!=(const vect2 &other) const
{
	if (this->_x != other._x || this->_y != other._y)
		return true;
	return false;
}

vect2 operator*(int num, const vect2 &v)
{
	return v * num;
}

std::ostream &operator<<(std::ostream &os, const vect2 &v)
{
	os << "{" << v[0] << ", " << v[1] << "}";
	return os;
}