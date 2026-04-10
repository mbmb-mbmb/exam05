#pragma once
#include <iostream>

class vect2
{
	public:

		vect2();
		vect2(int x, int y);
		vect2(const vect2& other);
		vect2& operator=(const vect2& other);

		bool operator==(const vect2& other) const;
		bool operator!=(const vect2& other) const;

		int& operator[](int index);
		const int& operator[](int index) const;

		vect2 operator++(int);
		vect2& operator++();
		vect2 operator--(int);
		vect2& operator--();

		vect2 operator+(const vect2& other) const;
		vect2 operator-(const vect2& other) const;
		vect2 operator*(int s) const;
		vect2& operator+=(const vect2& other);
		vect2& operator-=(const vect2& other);
		vect2& operator*=(const vect2& other);
		vect2& operator*=(int s);

		vect2 operator-() const;
		vect2 operator+() const;

		
		private:
		
		int _x;
		int _y;
	};
	
	vect2 operator*(int s, const vect2& other);
	std::ostream& operator<<(std::ostream& os, const vect2& v);