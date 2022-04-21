#pragma once
#include <iostream>
#include <typeinfo>
#include <string>
#include <boost/variant.hpp>
#include <map>
namespace {

	template<typename T>
	class boosted {
	private:
		T* ptr;
	};
	class var
	{
	public:
		typedef boost::variant<boosted<int>, boosted<double>> ExampleVariant;
		//typedef const type_info& type;
		var() = default;
		template<typename user_type>
		var(const user_type& v) {
			user_type* memory = new user_type(v);

		}
	private:

	};
}
std::ostream& operator<<(std::ostream& out, const var& r) {
	//out << static_cast<decltype(r.type_name->hash_code())>(r.getPtr());
	//out << static_cast<decltype(r.getHash())>(r.getPtr());
	return out;
}

