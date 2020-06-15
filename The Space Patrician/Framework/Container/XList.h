#pragma once

#include <list>

namespace TSPContainer
{
	template <class T>
	class XList
	{
	public:
		void								clear()					{ _list.clear(); }
		typename std::list<T>::iterator		begin()					{ return _list.begin(); }
		typename std::list<T>::iterator		end()					{ return _list.end(); }
		void								push_back(T object)		{ _list.push_back(object); }

	private:
		std::list<T> _list;

	};
}