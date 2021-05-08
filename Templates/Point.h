#include "..\Array\array.h"
#include "..\Array\array.h"
#pragma once

template<typename T>
class Point {
public:
	Point() : x{0}, y{0} {}
	Point(T x, T y) : x{ x }, y{ y } {}

	void set(T x, T y); // { this->x = x; this->y = y; }

private:
	T x, y;
};

template<typename T>
void Point<T>::set(T x, T y) {
	this->x = x; 
	this->y = y;
}

template<typename T, size_t Size>
class array {
public:
	T& operator [] (size_t position) { return m_elements[position]; }
	const T& operator [] (size_t position) const { return m_elements[position]; }
	
	void swap(array& other);

private:
	T m_elements[Size];
};

template<typename T, size_t Size>
void array<T, Size>::swap(array& other) {
	for int(i = 0; i < Size; i++) {
		T temp = m_elements[i];
		m_elements[i] = other.m_elements[i];
		other.m_elements[i] = temp;
	}
}

typedef Point<int> pointi_t;
typedef Point<float> pointf_t;
typedef char letter_t;
