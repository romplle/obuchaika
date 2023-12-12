#pragma once

#include "menu.hpp"
namespace KSerikov {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* go_back(const MenuItem* current);

	const MenuItem* study_algebra_sum(const MenuItem* current);
	const MenuItem* study_algebra_subtract(const MenuItem* current);
	const MenuItem* study_algebra_multiply(const MenuItem* current);
	const MenuItem* study_algebra_divide(const MenuItem* current);

	const MenuItem* study_mathan_diff(const MenuItem* current);
	const MenuItem* study_mathan_integrals(const MenuItem* current);
}