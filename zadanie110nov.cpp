#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

        int score = 0;

        // Вопрос 1
        cout << "1. Какое из следующих языков программирования является компилируемым?" << endl;
        cout << "a) Python" << endl;
        cout << "b) Java" << endl;
        cout << "c) C++" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer1;
        cin >> answer1;
        if (answer1 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }

        // Вопрос 2
        cout << "2. Где, согласно тексту басни И.А.Крылова, водили Слона?" << endl;
        cout << "a) По улицам" << endl;
        cout << "b) По проспектам" << endl;
        cout << "c) По магазинам" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer2;
        cin >> answer2;
        if (answer2 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }

        // Вопрос 3
        cout << "3. Кто торговал пиявками в сказке Золотой ключик" << endl;
        cout << "a) Базилио" << endl;
        cout << "b) Дуремар" << endl;
        cout << "c) Папа Карло" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer3;
        cin >> answer3;
        if (answer3 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 4
        cout << "4. Как пользователи ПК обычно называют нелицензионное программное обеспечение?" << endl;
        cout << "a) Эксплоит" << endl;
        cout << "b) Флуд" << endl;
        cout << "c) Варез" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer4;
        cin >> answer4;
        if (answer4 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 5
        cout << "5. Как звали кота, который всё время призывал нас жить дружно?" << endl;
        cout << "a) Леопольд" << endl;
        cout << "b) Мурзик" << endl;
        cout << "c) Барсик" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer5;
        cin >> answer5;
        if (answer5 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 6
        cout << "6. Какая римская богиня соответствует греческой Персефоне?" << endl;
        cout << "a) Веста" << endl;
        cout << "b) Аврора" << endl;
        cout << "c) Прозерпина" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer6;
        cin >> answer6;
        if (answer6 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 7
        cout << "7. Произведение какого художника можно увидеть зимой на окнах?" << endl;
        cout << "a) Ильи Репина" << endl;
        cout << "b) Василия Кандинского" << endl;
        cout << "c) Деда Мороза" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer7;
        cin >> answer7;
        if (answer7 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 8
        cout << "8. Какой размер обуви был у дяди Степы?" << endl;
        cout << "a) Сорок пятый" << endl;
        cout << "b) Сорок второй" << endl;
        cout << "c) Сорок девятый" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer8;
        cin >> answer8;
        if (answer8 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 9
        cout << "9. Какую птицу можно научить работе почтальона?" << endl;
        cout << "a) Голубь" << endl;
        cout << "b) Сокол" << endl;
        cout << "c) Воробей" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer9;
        cin >> answer9;
        if (answer9 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 10
        cout << "10. Решите древнеримский пример: MD - CLXXX = ?" << endl;
        cout << "a) MCLXXX" << endl;
        cout << "b) MCCCXX" << endl;
        cout << "c) MDLXXX" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer10;
        cin >> answer10;
        if (answer10 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 11
        cout << "11. Как зовут исполнителя песни Шоколадный заяц?" << endl;
        cout << "a) Пьер Нарцисс" << endl;
        cout << "b) Николя Баттлес" << endl;
        cout << "c) Жоан Леклерк" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer11;
        cin >> answer11;
        if (answer11 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 12
        cout << "12. Сколько байт в 1 Мбайте?" << endl;
        cout << "a) 1000" << endl;
        cout << "b) 1024" << endl;
        cout << "c) 1048576" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer12;
        cin >> answer12;
        if (answer12 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 13
        cout << "13. Что сделал старик из сказки А.С. Пушкина, поймав золотую рыбку?" << endl;
        cout << "a) Сварил уху" << endl;
        cout << "b) Купил аквариум" << endl;
        cout << "c) Отпустил в море" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer13;
        cin >> answer13;
        if (answer13 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 14
        cout << "14. На марках какой страны название страны отсутствует?" << endl;
        cout << "a) Япония" << endl;
        cout << "b) Англия" << endl;
        cout << "c) Швеция" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer14;
        cin >> answer14;
        if (answer14 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 15
        cout << "15. Какой формой глагола является инфинитив?" << endl;
        cout << "a) Неопределенной" << endl;
        cout << "b) Неизвестной" << endl;
        cout << "c) Непонятной" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer15;
        cin >> answer15;
        if (answer15 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 16
        cout << "16. Куда впадает река Уссури?" << endl;
        cout << "a) В Байкал" << endl;
        cout << "b) В Охотское море" << endl;
        cout << "c) В Амур" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer16;
        cin >> answer16;
        if (answer16 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 17
        cout << "17. Как называют дробь, у которой после запятой следует нескончаемое количество цифр?" << endl;
        cout << "a) Бесконечная" << endl;
        cout << "b) Безмерная" << endl;
        cout << "c) Безграничная" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer17;
        cin >> answer17;
        if (answer17 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 18
        cout << "18. Назовите архитектора здания Адмиралтейства в Санкт-Петербурге?" << endl;
        cout << "a) Баженов" << endl;
        cout << "b) Захаров" << endl;
        cout << "c) Росси" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer18;
        cin >> answer18;
        if (answer18 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 19
        cout << "19. Куда, согласно Конституции РФ, уходит Президент в случае вынесения ему импичмента?" << endl;
        cout << "a) В монастырь" << endl;
        cout << "b) В отпуск" << endl;
        cout << "c) В отставку" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer19;
        cin >> answer19;
        if (answer19 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 20
        cout << "20. Какую функцию выполняет самая длинная клавиша клавиатуры компьютера?" << endl;
        cout << "a) Ввод" << endl;
        cout << "b) Пробел" << endl;
        cout << "c) Знак абзаца" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer20;
        cin >> answer20;
        if (answer20 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 21
        cout << "21. Какое из этих слов не является сокращением?" << endl;
        cout << "a) Завмаг" << endl;
        cout << "b) Завхоз" << endl;
        cout << "c) Завтрак" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer21;
        cin >> answer21;
        if (answer21 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 22
        cout << "22. Кто такая златогузка?" << endl;
        cout << "a) Бабочка" << endl;
        cout << "b) Птица" << endl;
        cout << "c) Стрекоза" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer22;
        cin >> answer22;
        if (answer22 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 23
        cout << "23. Какое из приведенных чисел тождественно равно 1?" << endl;
        cout << "a) 0,9" << endl;
        cout << "b) 1,1" << endl;
        cout << "c) 0,(9)" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer23;
        cin >> answer23;
        if (answer23 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 24
        cout << "24. Какое из этих растений является медоносным?" << endl;
        cout << "a) Сирень" << endl;
        cout << "b) Жасмин" << endl;
        cout << "c) Черемуха" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer24;
        cin >> answer24;
        if (answer24 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 25
        cout << "25. В какой части тела располагается мениск?" << endl;
        cout << "a) Таз" << endl;
        cout << "b) Колено" << endl;
        cout << "c) Пятка" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer25;
        cin >> answer25;
        if (answer25 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 26
        cout << "26. Как назывались немецкие рыцарские поэты-певцы?" << endl;
        cout << "a) Трубадуры" << endl;
        cout << "b) Ваганты" << endl;
        cout << "c) Миннезингеры" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer26;
        cin >> answer26;
        if (answer26 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 27
        cout << "27. Какое из этих слов не является названием тригонометрической функции?" << endl;
        cout << "a) Косинус" << endl;
        cout << "b) Коллапс" << endl;
        cout << "c) Котангенс" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer27;
        cin >> answer27;
        if (answer27 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 28
        cout << "28. Кто такая Масяня?" << endl;
        cout << "a) Героиня мультфильма" << endl;
        cout << "b) Актриса" << endl;
        cout << "c) Ведущая" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer28;
        cin >> answer28;
        if (answer28 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 29
        cout << "29. Как называется должность главы НАТО?" << endl;
        cout << "a) Президент" << endl;
        cout << "b) Председатель" << endl;
        cout << "c) Генеральный секретарь" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer29;
        cin >> answer29;
        if (answer29 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 30
        cout << "30. Что усыпило Белоснежку?" << endl;
        cout << "a) Яблоко" << endl;
        cout << "b) Снотворное" << endl;
        cout << "c) Сериал" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer30;
        cin >> answer30;
        if (answer30 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 31
        cout << "31. Что в русской сказке просила привезти купца его младшая дочь??" << endl;
        cout << "a) Золотое руно" << endl;
        cout << "b) Тульский пряник" << endl;
        cout << "c) Аленький цветочек" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer31;
        cin >> answer31;
        if (answer31 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 32
        cout << "32. Как называли Маугли в волчьей стае?" << endl;
        cout << "a) Слоненок" << endl;
        cout << "b) Тигренок" << endl;
        cout << "c) Лягушонок" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer32;
        cin >> answer32;
        if (answer32 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 33
        cout << "33. Назовите фамилию дяди Степы." << endl;
        cout << "a) Семенов" << endl;
        cout << "b) Кузнецов" << endl;
        cout << "c) Степанов" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer33;
        cin >> answer33;
        if (answer33 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 34
        cout << "34. Какой народ составляет вместе с фламандцами население Бельгии?" << endl;
        cout << "a) Фризы" << endl;
        cout << "b) Фландры" << endl;
        cout << "c) Валлоны" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer34;
        cin >> answer34;
        if (answer34 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 35
        cout << "35. Какая команда была чемпионом СССР по футболу в 1946 году?" << endl;
        cout << "a) ЦСКА" << endl;
        cout << "b) Спартак" << endl;
        cout << "c) Динамо" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer35;
        cin >> answer35;
        if (answer35 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 36
        cout << "36. Как назывался автомобиль с откидным сиденьем вдоль бортов?" << endl;
        cout << "a) Купе" << endl;
        cout << "b) Пикап" << endl;
        cout << "c) Кабриолет" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer36;
        cin >> answer36;
        if (answer36 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 37
        cout << "37. Чего боится охлофоб?" << endl;
        cout << "a) Открытого пространства" << endl;
        cout << "b) Наказания" << endl;
        cout << "c) Толпы" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer37;
        cin >> answer37;
        if (answer37 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 38
        cout << "38.Какое из этих существ не относится к классу насекомых?" << endl;
        cout << "a) Паук" << endl;
        cout << "b) Муха" << endl;
        cout << "c) Муравей" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer38;
        cin >> answer38;
        if (answer38 == 'a') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 39
        cout << "39. Какой город является самым старым морским портом России?" << endl;
        cout << "a) Мурманск" << endl;
        cout << "b) Севастополь" << endl;
        cout << "c) Архангельск" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer39;
        cin >> answer39;
        if (answer39 == 'c') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вопрос 40
        cout << "40. Листьями какого дерева питается сумчатый медведь коала?" << endl;
        cout << "a) Фикуса" << endl;
        cout << "b) Эвкалипта" << endl;
        cout << "c) Акации" << endl;
        cout << "Выберите вариант ответа (a, b или c): ";
        char answer40;
        cin >> answer40;
        if (answer40 == 'b') {
            cout << "Правильно!" << endl;
            score++;
        }
        else {
            cout << "Неправильно." << endl;
        }
        // Вывод результатов
        cout << "Вы набрали " << score << " из 40 баллов." << endl;

        return 0;
    }