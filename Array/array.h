#pragma once
#include <initializer_list>

namespace a {
	template<typename T, size_t Size>
	class array {
	public:
		array();
		array(const std::initializer_list<T>& ilist);

		T& operator [] (size_t position);
		const T& operator [] (size_t position) const;
		T& at(size_t position);
		const T& at(size_t position) const;

		T& front();
		T& back();

		T* data();

		void fill(T value);
		void swap(array& other);

		bool empty() const;
		size_t size() const;

	private:
		size_t m_size = Size;
		T m_elements[Size]{};
	};

	template<typename T, size_t Size>
	a::array<T, Size>::array(const std::initializer_list<T>& ilist) {
		size_t i = 0;
		for (auto iter = ilist.begin(); iter != ilist.end(); iter++) {
			m_elements[i] = *iter;
			i++;
		}
	}

	template<typename T, size_t Size>
	a::array<T, Size>::array() {
		m_elements = T;
		m_size = Size;
	}

	template<typename T, size_t Size>
	T& a::array<T, Size>::operator[](size_t position) {
		return m_elements[position];
	}

	template<typename T, size_t Size>
	const T& a::array<T, Size>::operator[](size_t position) const {
		return m_elements[position];
	}

	template<typename T, size_t Size>
	T& a::array<T, Size>::at(size_t position)
	{
		return array::at(position);
	}

	template<typename T, size_t Size>
	const T& a::array<T, Size>::at(size_t position) const {
		return array::at(position);
	}

	template<typename T, size_t Size>
	T& a::array<T, Size>::front() {
		return m_elements[0];
	}

	template<typename T, size_t Size>
	T& a::array<T, Size>::back() {
		return m_elements[m_size - 1];
	}

	template<typename T, size_t Size>
	T* a::array<T, Size>::data() {
		return m_elements;
	}

	template<typename T, size_t Size>
	void a::array<T, Size>::fill(T value) {
		for (size_t i = 0; i < m_size; i++) {
			m_elements[i] = value;
		}
	}

	template<typename T, size_t Size>
	void a::array<T, Size>::swap(array& other) {
		T tempArray[Size]{};
		for (size_t i = 0; i < m_size; i++) {
			tempArray[i] = m_elements[i];
		}
		for (size_t i = 0; i < m_size; i++) {
			m_elements[i] = other[i];
		}
		for (size_t i = 0; i < m_size; i++) {
			other[i] = tempArray[i];
		}
	}

	template<typename T, size_t Size>
	bool a::array<T, Size>::empty() const {
		return m_size == 0 ? true : false;
	}

	template<typename T, size_t Size>
	size_t a::array<T, Size>::size() const {
		return m_size;
	}
}
