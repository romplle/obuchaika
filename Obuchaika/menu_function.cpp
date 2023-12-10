#include "menu_function.hpp"

#include <cstdlib>
#include <iostream>

const KSerikov::MenuItem* KSerikov::show_menu(const MenuItem * current) {
    std::cout << "Привет!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const KSerikov::MenuItem* KSerikov::exit(const MenuItem* current) {
	std::exit(0);
}

const KSerikov::MenuItem* KSerikov::study_sum(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KSerikov::MenuItem* KSerikov::study_subtract(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KSerikov::MenuItem* KSerikov::study_multiply(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KSerikov::MenuItem* KSerikov::study_divide(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KSerikov::MenuItem* KSerikov::study_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
