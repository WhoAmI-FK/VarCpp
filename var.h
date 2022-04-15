#pragma once
#include <iostream>
#include <typeinfo>
#include <string>
	class var
	{
	public:
		typedef void* dynamic;
		typedef std::string type;
		var() = default;
		template<typename user_type>
		var(const user_type& v) {
			type_name = typeid(user_type).name();
			user_type* memory = new user_type(v);
			ptr = memory;
		}		
		std::string getTypeName() const {
			return type_name;
		}
		dynamic getPtr() const {
			return ptr;
		}
	private:
		dynamic ptr;
		type type_name; 
	};

std::ostream& operator<<(std::ostream& out, const var& r) {
	if (r.getTypeName() == "int" || r.getTypeName() == "i") {
		int* a = static_cast<int*>(r.getPtr());
	//	return (out << static_cast<int*>(r.ptr));
		out << (*a);
	}	
	return out;
}

