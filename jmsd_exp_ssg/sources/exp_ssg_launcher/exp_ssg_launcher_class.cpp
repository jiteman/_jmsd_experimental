#include "exp_ssg_launcher_class.h"


namespace jmsd {
namespace exp_executable {


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
char const *Exp_ssg_launcher_class::say_executable_hello() const noexcept {
	return "Exp_ssg_launcher_class::say_executable_hello";
}

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
Exp_ssg_launcher_class::~Exp_ssg_launcher_class() noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_class::Exp_ssg_launcher_class() noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_class::Exp_ssg_launcher_class( Exp_ssg_launcher_class const &/*another*/ ) noexcept = default;

Exp_ssg_launcher_class &Exp_ssg_launcher_class::operator =( Exp_ssg_launcher_class const &another ) noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Exp_ssg_launcher_class::Exp_ssg_launcher_class( Exp_ssg_launcher_class &&/*another*/ ) noexcept = default;

Exp_ssg_launcher_class &Exp_ssg_launcher_class::operator =( Exp_ssg_launcher_class &&another ) noexcept = default;

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


} // namespace exp_executable
} // namespace jmsd
