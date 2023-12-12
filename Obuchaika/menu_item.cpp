#include "menu_item.hpp"

#include <cstddef>

#include "menu_function.hpp"

const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA_SUM = {
    "1 - Хочу научиться складывать!", KSerikov::study_algebra_sum, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA_SUBTRACT = {
    "2 - Хочу научиться вычитать!", KSerikov::study_algebra_subtract, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA_MULTIPLY = {
    "3 - Хочу научиться умножать!", KSerikov::study_algebra_multiply, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA_DIVIDE = {
    "4 - Хочу научиться делить!", KSerikov::study_algebra_divide, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA_GO_BACK = {
    "0 - Выйти в главное меню!", KSerikov::go_back, &KSerikov::STUDY_ALGEBRA
};

namespace {
    const KSerikov::MenuItem* const study_algebra_children[] = {
        &KSerikov::STUDY_ALGEBRA_GO_BACK,
        &KSerikov::STUDY_ALGEBRA_SUM,
        &KSerikov::STUDY_ALGEBRA_SUBTRACT,
        &KSerikov::STUDY_ALGEBRA_MULTIPLY,
        &KSerikov::STUDY_ALGEBRA_DIVIDE
    };
    const int study_algebra_size = sizeof(study_algebra_children) / sizeof(study_algebra_children[0]);
}

const KSerikov::MenuItem KSerikov::STUDY_MATHAN_DIFF = {
    "1 - Хочу научиться дифференцировать!", KSerikov::study_mathan_diff, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_MATHAN_INTEGRALS = {
    "2 - Хочу научиться брать интегралы!", KSerikov::study_mathan_integrals, &KSerikov::STUDY_ALGEBRA
};
const KSerikov::MenuItem KSerikov::STUDY_MATHAN_GO_BACK = {
    "0 - Выйти в главное меню!", KSerikov::go_back, &KSerikov::STUDY_ALGEBRA
};

namespace {
    const KSerikov::MenuItem* const study_mathan_children[] = {
        &KSerikov::STUDY_MATHAN_GO_BACK,
        &KSerikov::STUDY_MATHAN_DIFF,
        &KSerikov::STUDY_MATHAN_INTEGRALS,
    };
    const int study_mathan_size = sizeof(study_mathan_children) / sizeof(study_mathan_children[0]);
}

const KSerikov::MenuItem KSerikov::STUDY_ALGEBRA = {
    "1 - Хочу учиться алгебре!", KSerikov::show_menu,& KSerikov::MAIN, study_algebra_children, study_algebra_size
};
const KSerikov::MenuItem KSerikov::STUDY_MATHAN = {
    "2 - Хочу изучать математический анализ!", KSerikov::show_menu,& KSerikov::MAIN, study_mathan_children, study_mathan_size
};
const KSerikov::MenuItem KSerikov::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", KSerikov::go_back, &KSerikov::STUDY
};

namespace {
    const KSerikov::MenuItem* const study_children[] = {
        &KSerikov::STUDY_GO_BACK,
        &KSerikov::STUDY_ALGEBRA,
        &KSerikov::STUDY_MATHAN
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const KSerikov::MenuItem KSerikov::STUDY = {
    "1 - Хочу учиться математике!", KSerikov::show_menu, &KSerikov::MAIN, study_children, study_size
};
const KSerikov::MenuItem KSerikov::EXIT = {
    "0 - Я лучше пойду полежу...", KSerikov::exit, &KSerikov::MAIN
};

namespace {
    const KSerikov::MenuItem* const main_children[] = {
        &KSerikov::EXIT,
        &KSerikov::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KSerikov::MenuItem KSerikov::MAIN = {
    nullptr, KSerikov::show_menu, nullptr, main_children, main_size
};