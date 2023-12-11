#include "menu_item.hpp"

#include <cstddef>

#include "menu_function.hpp"

const KSerikov::MenuItem KSerikov::STUDY_SUM = {
    "1 - Хочу научиться складывать!", KSerikov::study_sum, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_SUBTRACT = {
    "2 - Хочу научиться вычитать!", KSerikov::study_subtract, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_MULTIPLY = {
    "3 - Хочу научиться умножать!", KSerikov::study_multiply, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_DIVIDE = {
    "4 - Хочу научиться делить!", KSerikov::study_divide, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", KSerikov::study_go_back, &KSerikov::STUDY
};

namespace {
    const KSerikov::MenuItem* const study_children[] = {
        &KSerikov::STUDY_GO_BACK,
        &KSerikov::STUDY_SUM,
        &KSerikov::STUDY_SUBTRACT,
        &KSerikov::STUDY_MULTIPLY,
        &KSerikov::STUDY_DIVIDE
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