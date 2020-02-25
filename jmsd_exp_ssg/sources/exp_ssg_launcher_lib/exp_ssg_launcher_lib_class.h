#pragma once


#include "exp_ssg_lib_class.h"


#include "exp_ssg_launcher_lib.h"


namespace jmsd {
namespace exp_derived {


class JMSD_EXP_SSG_LAUNCHER_LIBRARY_SHARED_INTERFACE Exp_ssg_launcher_lib_class :
	public exp_base::Exp_ssg_lib_class
{

public:
	// virtuals Exp_ssg_lib_class
	//~virtuals Exp_ssg_lib_class

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
public:
	char const *say_derived_hello() const noexcept;

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
public:
	// virtual Exp_ssg_lib_class
	~Exp_ssg_launcher_lib_class() noexcept override;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
public:
	Exp_ssg_launcher_lib_class() noexcept;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
protected:
	Exp_ssg_launcher_lib_class( Exp_ssg_launcher_lib_class const &another ) noexcept;
	Exp_ssg_launcher_lib_class &operator =( Exp_ssg_launcher_lib_class const &another ) noexcept;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
protected:
	Exp_ssg_launcher_lib_class( Exp_ssg_launcher_lib_class &&another ) noexcept;
	Exp_ssg_launcher_lib_class &operator =( Exp_ssg_launcher_lib_class &&another ) noexcept;

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
private:

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:

};


} // namespace exp_derived
} // namespace jmsd
