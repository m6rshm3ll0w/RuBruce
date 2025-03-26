#include "language.h"

// Инициализация словаря с переводами
std::map<Language, std::map<StringKey, std::string>> LanguageManager::translations = {
    {LANG_RUSSIAN, {
        {STR_BRUCE, "РуБрюс"},
        {STR_PREDATOR, "ХИЩНАЯ РУССКАЯ ПРОШИВКА"}
        {STR_WELCOME, "Добро пожаловать"},
        {STR_BOOT_SCREEN, "Загрузка..."},
        {STR_MENU, "Меню"},
        {STR_EXIT, "Выход"},
    }},
    // {LANG_ENGLISH, {
    //     {STR_WELCOME, "Welcome"},
    //     {STR_BOOT_SCREEN, "Booting..."},
    //     {STR_MENU, "Menu"},
    //     {STR_EXIT, "Exit"},
    // }},
    // {LANG_UKRAINIAN, {
    //     {STR_WELCOME, "Ласкаво просимо"},
    //     {STR_BOOT_SCREEN, "Завантаження..."},
    //     {STR_MENU, "Меню"},
    //     {STR_EXIT, "Вихід"},
    // }},
};

// Инициализация текущего языка
Language LanguageManager::currentLanguage = LANG_ENGLISH;

// Установить язык
void LanguageManager::setLanguage(Language lang) {
    currentLanguage = lang;
}

// Получить переведенную строку
std::string LanguageManager::getString(StringKey key) {
    return translations[currentLanguage][key];
}

// Получить текущий язык
Language LanguageManager::getCurrentLanguage() {
    return currentLanguage;
}
