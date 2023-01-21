<h1 align="center">
  :printer: ft_printf
</h1>

<h1>
	<b><img src=img/success.PNG width=150px></b>
</h1>

## Language
* [English](#Content)
* [Русский(Russian)](#Содержание)

## Content
* [What is ft_printf](#What-is-ft_printf)
* [Instructions](#Instructions)
* [Result](#Result)

## What is ft_printf
### [The task](https://github.com/scainet7/ft_printf/blob/master/subject/subject_ft_printf_en.pdf)
Ft_printf is a project written in the C language, it is the prototype of the "printf" function, which serves to display information. This project uses the previously written libft library.

ft_printf takes a string, called a format, which can contain a number of placeholders provided after the % character and the data conversion type (string (str), character (char), int to decimal, int to hexadecimal, etc.)

A small description of the required conversion:

* %c print a single character.

* %s print a string of characters.

* %p The void * pointer argument is printed in hexadecimal.

* %d print a decimal (base 10) number.

* %i print an integer in base 10.

* %u print an unsigned decimal (base 10) number.

* %x print a number in hexadecimal (base 16), with lowercase.

* %X print a number in hexadecimal (base 16), with uppercase.

* %% print a percent sign.

Basic rules for project implementation

* The prototype of ft_printf should be int ft_printf(const char *, ...);

* You have to recode the libc’s printf function

* It must not do the buffer management like the real printf

* It will manage the following conversions: cspdiuxX%

* It will be compared with the real printf

* You must use the command ar to create your librairy, using the command libtool is forbidden.

## Instructions

Clone this repository in your local computer:

```sh
git clone https://github.com/scainet7/ft_printf.git
```
```sh
cd ft_printf
```
```sh
make
```
```sh
gcc libftprintf.a -o test test.c
```
```sh
./test
```

## Result

Testing main:
<h1>
	<b><img src=img/main.png width=450px></b>
</h1>


<h1>
  <b><img src=img/test.gif width="700px"/><b>
</h1>

## Содержание
* [Что такое ft_printf](#Что-такое-ft_printf)
* [Инструкция](#Инструкция)
* [Результат](#Результат)

## Что такое ft_printf
### [Задание](https://github.com/scainet7/ft_printf/blob/master/subject/subject_ft_printf_en.pdf)
Ft_printf — проект, написанный на языке C, это прототип функции «printf», которая служит для вывода информации. В этом проекте используется ранее написанная библиотека libft.

ft_printf принимает строку, называемую форматом, которая может содержать ряд заполнителей, предоставляемых после символа %, и тип преобразования данных (строка (str), символ (char), целое в десятичное, целое в шестнадцатеричное и т. д.)

Небольшое описание необходимой конвертации:

* %c напечатать один символ.

* %s напечатать строку символов.

* %p Аргумент указателя void * печатается в шестнадцатеричном формате.

* %d напечатать десятичное (с основанием 10) число.

* %i вывести целое число по основанию 10.

* %u напечатать десятичное число без знака (по основанию 10).

* %x вывести число в шестнадцатеричном формате (с основанием 16) в нижнем регистре.

* %X вывести число в шестнадцатеричном формате (с основанием 16) в верхнем регистре.

* %% напечатать знак процента.

Основные правила реализации проекта

* Прототип ft_printf должен быть int ft_printf(const char *, ...);

* Вы должны перекодировать функцию printf библиотеки libc.

* Он не должен управлять буфером, как настоящий printf

* Он будет управлять следующими преобразованиями: cspdiuxX%

* Будет сравниваться с реальным printf

* Вы должны использовать команду ar для создания своей библиотеки, использование команды libtool запрещено.

## Инструкция

Клонируйте этот репозиторий на свой локальный компьютер:

```sh
git clone https://github.com/scainet7/ft_printf.git
```
```sh
cd ft_printf
```
```sh
make
```
```sh
gcc libftprintf.a -o test test.c
```
```sh
./test
```

## Результат

Тестовый main:
<h1>
	<b><img src=img/main.png width=450px></b>
</h1>


<h1>
  <b><img src=img/test.gif width="700px"/><b>
</h1>
