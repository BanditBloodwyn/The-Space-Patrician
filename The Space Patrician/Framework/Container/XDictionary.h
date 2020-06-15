#pragma once

#include <map>
#include "XList.h"


namespace TSPContainer
{
	template <class T1, class T2>
	class XDictionary
	{
	public:
		XDictionary()
		{
			_map.clear();
		}

	public:
		TSPContainer::XList<T2> Values()
		{
			TSPContainer::XList<T2> values;
			for (auto value = _map.begin(); value != _map.end(); value++)
			{
				values.push_back(value->second);
			}

			return values;
		}

		 void										clear()			{ _map.clear(); }
		 typename std::map<T1, T2>::iterator		find(T1 key)	{ return _map.find(key); }
		 typename std::map<T1, T2>::iterator		end()			{ return _map.end(); }
		 
		 //! []. access operator
		 T2& operator[] (T1 x) { return _map[x]; }

	private:
		std::map<T1, T2> _map;
	};
}