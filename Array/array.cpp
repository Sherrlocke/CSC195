//#include "array.h"
//#include <iostream>
//
//a::array::array(const std::initializer_list<int>& ilist) {
//	size_t i = 0;
//	for (auto iter = ilist.begin(); iter != ilist.end(); iter++) {
//		m_elements[i] = *iter;
//		i++;
//	}
//}
//
//a::array::array() {
//
//}
//
//int& a::array::operator[](size_t position) {
//	return m_elements[position];
//}
//
//const int& a::array::operator[](size_t position) const {
//	return m_elements[position];
//}
//
//int& a::array::at(size_t position)
//{
//	return array::at(position);
//}
//
//const int& a::array::at(size_t position) const {
//	return array::at(position);
//}
//
//int& a::array::front() {
//	return m_elements[0];
//}
//
//int& a::array::back() {
//	return m_elements[m_size - 1];
//}
//
//int* a::array::data() {
//	return m_elements;
//}
//
//void a::array::fill(int value) {
//	for (size_t i = 0; i < m_size; i++) {
//		m_elements[i] = value;
//	}
//}
//
//void a::array::swap(array& other) {
//	int tempArray[m_size]{};
//	for (size_t i = 0; i < m_size; i++) {
//		tempArray[i] = m_elements[i];
//	}
//	for (size_t i = 0; i < m_size; i++) {
//		m_elements[i] = other[i];
//	}
//	for (size_t i = 0; i < m_size; i++) {
//		other[i] = tempArray[i];
//	}
//}
//
//bool a::array::empty() const {
//	return m_size == 0 ? true : false;
//}
//
//size_t a::array::size() const {
//	return m_size;
//}