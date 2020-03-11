#include "exp_ssg_Game_launcher_lib.h"


#include "ssg/main/ssg_Application.h"
#include "ssg/main/NeHe_Lesson_0006_plus.h"
#include "ssg/main/SFML_Win32_example.h"


int exp_ssg_Game_launcher_library() {
//	return ssg_Application();
//	return ::nehe_lesson_0006_plus::NeHe_lesson_0001_plus();
	return ::sfml_win32_example::sfml_win32_example_main();
}
