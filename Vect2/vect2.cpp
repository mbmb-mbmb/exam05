#include "vect2.hpp"

vect2::vect2() : _x(0), _y(0) {}
vect2::vect2(int x, int y) : _x(x), _y(y) {}
vect2::vect2(const vect2& other) : _x(other._x), _y(other._y) {}

vect2& vect2::operator=(const vect2& other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

bool vect2::operator==(const vect2& other) const
{
	return (_x == other._x && _y == other._y);
}

bool vect2::operator!=(const vect2& other) const
{
	return !(*this == other);
}

int& vect2::operator[](int index)
{
	if (index == 0)
		return _x;
	return _y;
}

const int& vect2::operator[](int index) const
{
	if (index == 0)
		return _x;
	return _y;
}

vect2 vect2::operator++(int) // post increment
{
	return vect2(_x++, _y++);
}

vect2& vect2::operator++() // pre increment
{
	++_x;
	++_y;
	return *this;
}

vect2 vect2::operator--(int) // post decrement
{
	return vect2(_x--, _y--);
}

vect2& vect2::operator--() // pre decrement
{
	--_x;
	--_y;
	return *this;
}

vect2 vect2::operator+(const vect2& other) const { vect2 r(*this); r += other; return r; }
vect2 vect2::operator-(const vect2& other) const { vect2 r(*this); r -= other; return r; }
vect2 vect2::operator*(int s) const { vect2 r(*this); r *= s; return r; }

vect2& vect2::operator+=(const vect2& other)
{
	_x += other._x;
	_y += other._y;
	return *this;
}

vect2& vect2::operator-=(const vect2& other)
{
	_x -= other._x;
	_y -= other._y;
	return *this;
}

vect2& vect2::operator*=(const vect2& other)
{
	_x *= other._x;
	_y *= other._y;
	return *this;
}

vect2& vect2::operator*=(int s)
{
	_x *= s;
	_y *= s;
	return *this;
}

vect2 vect2::operator-() const { return vect2(-_x, -_y); }
vect2 vect2::operator+() const { return vect2(+_x, +_y); }

std::ostream& operator<<(std::ostream& os, const vect2& v)
{
	os << "{" << v[0] << ", " << v[1] << "}";
	return os;
}

vect2 operator*(int s, const vect2& other) { return other * s; }
