#pragma once
#include"Vector.h"
template<typename T>
class EnhancedVector :public Vector<T>
{
public:
	T & operator[](int index)throw() //mozhno ne pisat' throw(). on dlia staruh kompiliatorov
	{
		if (index < 0)
			throw("index is too low");
		else if (index >= size())
			throw("index is too high");
		else
		return els[index];
	}
};
