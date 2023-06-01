﻿#include<iostream>
using namespace std;

int main() {
    //Task_1 
    setlocale(LC_ALL, "RUS");
    int dayNumber;
    cout << "Введите номер дня недели (1-7): ";
    cin >> dayNumber;

    if (dayNumber == 1) {
        cout << "Понедельник" << "\n";
    }
    else if (dayNumber == 2) {
        cout << "Вторник" << "\n";
    }
    else if (dayNumber == 3) {
        cout << "Среда" << "\n";
    }
    else if (dayNumber == 4) {
        cout << "Четверг" << "\n";
    }
    else if (dayNumber == 5) {
        cout << "Пятница" << "\n";
    }
    else if (dayNumber == 6) {
        cout << "Суббота" << "\n";
    }
    else if (dayNumber == 7) {
        cout << "Воскресенье" << "\n";
    }
    else {
        cout << "Неверный номер дня недели" << "\n";
    }

    switch (dayNumber) {
    case 1:
        cout << "День не очень" << "\n";
        break;
    case 2:
        cout << "Уже хуже день" << "\n";
        break;
    case 3:
        cout << "О,ура,можно код пописать :)" << "\n";
        break;
    case 4:
        cout << "Менее разгрузочный,но день всё же" << "\n";
        break;
    case 5:
        cout << "Снова пишем код :)" << "\n";
        break;
    case 6:
        cout << "Разгрузка от уроков" << "\n";
        break;
    case 7:
        cout << "Выполнение дз по С++" << "\n";
        break;
    default:
        cout << "Укажи правильный,пожалуйста :)" << "\n";
        break;
    }
    cout << "\n";

    //Task_2
    int score = 0;

    cout << "Добро пожаловать в игру 'О, счастливчик!'." << "\n";
    cout << "Ответь на следующие вопросы и получи приз, выбрав вариант (a, b, c)." << "\n";
    cout << "Неправильный ответ завершит игру. Удачи в прохождении! Ничего сложного: это курс алгебра 11 клас. :) " << "\n";

    cout << "Вопрос 1: Когда было правозглашена Саудовская Аравия?" << "\n";
    cout << "a) 14 апреля 1845" << "\n";
    cout << "b) 23 сентября 1932" << "\n";
    cout << "c) 17 сентября 1945" << "\n";
    char answer1;
    cin >> answer1;

    if (answer1 == 'b') {
        cout << "Верно!" << "\n";
        score++;
    }
    else {
        cout << "Неправильный ответ! Игра окончена." << "\n";
        return 0;
    }

    cout << "Вопрос 2: Когда Чикен-Бекония получила свою независимость от Султаната Ауса?" << "\n";
    cout << "a) 14 сентября 1790" << "\n";
    cout << "b) 20 августа 1901" << "\n";
    cout << "c) 31 мая 2021" << "\n";
    char answer2;
    cin >> answer2;

    if (answer2 == 'c') {
        cout << "Верно!" << "\n";
        score++;
    }
    else {
        cout << "Неправильный ответ! Игра окончена. В следующий раз повезёт,не расстраивайся :)" << "\n";
        return 0;
    }

    cout << "Вопрос 3: Что поедают шведы когда слышат о таком прекрасном слове как Нейтралитет?" << "\n";
    cout << "a) Курицу" << "\n";
    cout << "b) Икею" << "\n";
    cout << "c) Желешки" << "\n";
    char answer3;
    cin >> answer3;

    if (answer3 == 'b') {
        cout << "Верно!" << "\n";
        score++;
    }
    else {
        cout << "Неправильный ответ! Игра окончена. В следующий раз повезёт,не расстраивайся :)" << "\n";
        return 0;
    }

    cout << "Вопрос 4: Каким предложением можно назвать человека который объехал весь свет,но ничего не сфотографировал на память?" << "\n";
    cout << "a) Ты шо индейцем вырос?" << "\n";
    cout << "b) Ты кто вообще такой?" << "\n";
    cout << "c) А мне показать?" << "\n";
    char answer4;
    cin >> answer4;

    if (answer4 == 'a') {
        cout << "Верно!" << "\n";
        score++;
    }
    else {
        cout << "Неправильный ответ! Игра окончена. В следующий раз повезёт,не расстраивайся :)" << "\n";
        return 0;
    }

    cout << "Вопрос 5: Почему на учебнике Зарубежной литературы за 5 класс корабли то есть,то они превращаются в мост?" << "\n";
    cout << "a) Потому что это обман." << "\n";
    cout << "b) Я не знаю что это такое." << "\n";
    cout << "c) Это...реквием. Всё что ты видишь,реально!" << "\n";
    char answer5;
    cin >> answer5;

    if (answer5 == 'c') {
        cout << "Верно!" << "\n";
        score++;
    }
    else {
        cout << "Неправильный ответ! Игра окончена. В следующий раз повезёт,не расстраивайся :)" << "\n";
        return 0;
    }
    if (score == 5) {
        cout << "Ты прошёл игру. Ты - счастливчик. Ты получаешь путёвку на выход из игры как приз. Спасибо что поучавствовал!" << "\n";
    }
}