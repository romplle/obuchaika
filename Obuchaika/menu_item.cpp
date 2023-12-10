#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const KSerikov::MenuItem KSerikov::STUDY_SUMM = {
    "1 - ���� ��������� ����������!", KSerikov::study_summ, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_SUBSTRACT = {
    "2 - ���� ��������� ��������!", KSerikov::study_substract, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_MULTIPLY = {
    "3 - ���� ��������� ��������!", KSerikov::study_multiply, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_DIVIDE = {
    "4 - ���� ��������� ������!", KSerikov::study_divide, &KSerikov::STUDY
};
const KSerikov::MenuItem KSerikov::STUDY_GO_BACK = {
    "0 - ����� � ������� ����", KSerikov::study_go_back, &KSerikov::STUDY
};

namespace {
    const KSerikov::MenuItem* const study_children[] = {
        &KSerikov::STUDY_GO_BACK,
        &KSerikov::STUDY_SUMM,
        &KSerikov::STUDY_SUBSTRACT,
        &KSerikov::STUDY_MULTIPLY,
        &KSerikov::STUDY_DIVIDE
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const KSerikov::MenuItem KSerikov::STUDY = {
    "1 - ���� ������� ����������!", KSerikov::show_menu, &KSerikov::MAIN, study_children, study_size
};
const KSerikov::MenuItem KSerikov::EXIT = {
    "0 - � ����� ����� ������...", KSerikov::exit, &KSerikov::MAIN
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