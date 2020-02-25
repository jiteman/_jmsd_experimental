#include "exp_ssg_launcher_lib_class.h"


namespace jmsd {
namespace exp_derived {


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
char const *Exp_ssg_launcher_lib_class::say_derived_hello() const noexcept {
	return "Exp_ssg_launcher_lib_class::say_derived_hello";
}

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
Exp_ssg_launcher_lib_class::~Exp_ssg_launcher_lib_class() noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_lib_class::Exp_ssg_launcher_lib_class() noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_lib_class::Exp_ssg_launcher_lib_class( Exp_ssg_launcher_lib_class const &/*another*/ ) noexcept = default;

Exp_ssg_launcher_lib_class &Exp_ssg_launcher_lib_class::operator =( Exp_ssg_launcher_lib_class const &another ) noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_lib_class::Exp_ssg_launcher_lib_class( Exp_ssg_launcher_lib_class &&/*another*/ ) noexcept = default;

Exp_ssg_launcher_lib_class &Exp_ssg_launcher_lib_class::operator =( Exp_ssg_launcher_lib_class &&another ) noexcept = default;

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


} // namespace exp_derived
} // namespace jmsd
