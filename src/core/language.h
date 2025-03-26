#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <map>
#include <string>

// Поддерживаемые языки
enum Language {
    LANG_RUSSIAN,
    // LANG_ENGLISH,
    // LANG_UKRAINIAN,
};

// Ключи для переведенных строк
enum StringKey {
    STR_BRUCE,
    STR_PREDATOR,
    STR_WELCOME,
    STR_BOOT_SCREEN,
    STR_MENU,
    STR_EXIT,
};

class LanguageManager {
public:
    // Установить язык
    static void setLanguage(Language lang);

    // Получить переведенную строку
    static std::string getString(StringKey key);

    // Получить текущий язык
    static Language getCurrentLanguage();

private:
    // Словарь с переводами
    static std::map<Language, std::map<StringKey, std::string>> translations;

    // Текущий язык
    static Language currentLanguage;
};

#endif
