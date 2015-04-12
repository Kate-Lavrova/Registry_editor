﻿\i не различать строчные и заглавные буквы.
\m считать строку многострочной.
\s однострочная строка.
\x расширенный синтаксис ( использование пробелов и комментариев)
\\ считать следующий метасимвол как обычный символ.
\^ начало строки
\. один произвольный символ. Кроме '\n' - конец строки.
\$ конец строки
\| альтернатива (или)
\() группировка
\[] класс символов
\* повторяется 0 или большее число раз
\+ -//- 1 или большее число раз
\? 1 или 0 раз
\{n} точно n раз
\{n,} по меньшей мере раз
\{n,m} не меньше n, но и не больше m
\*? станет 0 и более
\+? 1 и более
\?? 0 или 1 раз
\{n}? точно n раз
\{n,}? не меньше n раз
\{n,m}? больше или равно n и меньше m раз
\t символ табуляции
\n новая строка
\r перевод каретки
\а перевод формата
\v вертикальная табуляция
\a звонок
\e escape
\033 восьмеричная запись символа
\x1A шестнадцатеричная
\c[ control символ
\l нижний регистр следующего символа
\u верхний регистр -//-
\L все символы в нижнем регистре до \E
\U в верхнем -//-
\E ограничитель смены регистра
\Q отмена действия как метасимвола
\w алфавитно-цифровой или '_' символ
\W не -//-
\s один пробел
\S один не пробел
\d одна цифра
\D одна не цифра
\b граница слова
\B не граница слова
\A начало строки
\Z конец строки
\G конец действия m//g