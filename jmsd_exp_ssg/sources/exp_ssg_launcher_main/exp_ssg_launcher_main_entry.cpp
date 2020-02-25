#include "exp_ssg_launcher_class.h"

#include "exp_ssg_launcher_function.h"
#include "exp_ssg_launcher_lib_function.h"
#include "exp_ssg_lib_function.h"


#include <iostream>


int main( int const /*argc*/, char const *const * /*argv*/ ) {
	auto *example = new ::jmsd::exp_executable::Exp_ssg_launcher_class;

	::std::cout << example->say_base_hello() << ::std::endl;
	::std::cout << example->say_derived_hello() << ::std::endl;
	::std::cout << example->say_executable_hello() << ::std::endl;

	::std::cout << jmsd_exp_ssg_lib_function_say_executable_hello() << ::std::endl;
	::std::cout << jmsd_exp_ssg_launcher_lib_function_say_executable_hello() << ::std::endl;
	::std::cout << jmsd_exp_ssg_launcher_function_say_executable_hello() << ::std::endl;

	delete example;

	return 0;
}
