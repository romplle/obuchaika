#include "menu_function.hpp"

#include <cstdlib>
#include <iostream>
#include <random>

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

const KSerikov::MenuItem* KSerikov::go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const KSerikov::MenuItem* KSerikov::study_algebra_sum(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;

    std::mt19937 mt(time(nullptr));
    int number_1 = (mt() % 10);
    int number_2 = (mt() % 10);

    int question = number_1 + number_2;
    std::cout << number_1 << " + " << number_2 << " = ";
    int answer;
    std::cin >> answer;
    if (question == answer) {
        std::cout << "Ответ правильный!" << std::endl;
        return current->parent;
    }
    else {
        std::cout << "Ответ неправильный!" << std::endl;
        return current;
    }
}
const KSerikov::MenuItem* KSerikov::study_algebra_subtract(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;

    std::mt19937 mt(time(nullptr));
    int number_1 = (mt() % 10);
    int number_2 = (mt() % 10);

    int question = number_1 - number_2;
    std::cout << number_1 << " - " << number_2 << " = ";
    int answer;
    std::cin >> answer;
    if (question == answer) {
        std::cout << "Ответ правильный!" << std::endl;
        return current->parent;
    }
    else {
        std::cout << "Ответ неправильный!" << std::endl;
        return current;
    }
}
const KSerikov::MenuItem* KSerikov::study_algebra_multiply(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;

    std::mt19937 mt(time(nullptr));
    int number_1 = (mt() % 10);
    int number_2 = (mt() % 10);

    int question = number_1 * number_2;
    std::cout << number_1 << " * " << number_2 << " = ";
    int answer;
    std::cin >> answer;
    if (question == answer) {
        std::cout << "Ответ правильный!" << std::endl;
        return current->parent;
    }
    else {
        std::cout << "Ответ неправильный!" << std::endl;
        return current;
    }
}
const KSerikov::MenuItem* KSerikov::study_algebra_divide(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;

    std::mt19937 mt(time(nullptr));
    int number_1 = (mt() % 10);
    int number_2 = (mt() % 10);

    int question = number_1 / number_2;
    std::cout << number_1 << " / " << number_2 << " = ";
    int answer;
    std::cin >> answer;
    if (question == answer) {
        std::cout << "Ответ правильный!" << std::endl;
        return current->parent;
    }
    else {
        std::cout << "Ответ неправильный!" << std::endl;
        return current;
    }
}

const KSerikov::MenuItem* KSerikov::study_mathan_diff(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    std::cout << "diff" << std::endl;

    return current->parent;
}
const KSerikov::MenuItem* KSerikov::study_mathan_integrals(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    std::cout << "integral" << std::endl;

    return current->parent;
}