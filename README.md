# OPK-315
Форкаемся от репозитория и создаем ветку со своим именем и фамилелей в названии, и в ней уже решаем задачу; язык программирования не имеет значения(можно хоть блоксхемой обойтись)

Собственно задача:

У Любы есть n телевизоров. Она знает, что i-й телевизор включен в моменты времени с li по ri включительно.

Люба хочет выключить один из телевизоров из розетки, чтобы зарядить телефон. Назовём телевизор лишним, если после его выключения количество целочисленных моментов времени, в которые работает хотя бы один из оставшихся включенным телевизоров, не уменьшится. Люба очень расстроится, если ей придётся выключить не лишний телевизор.

Помогите ей, сообщив индекс произвольного лишнего телевизора. Если такого телевизора нет, выведите «-1».

Входные данные
В первой строке входных данных задано целое число n (1 ≤ n ≤ 2·105) — количество телевизоров.

В следующих n строках задано по два целых числа li, ri (0 ≤ li ≤ ri ≤ 109) — отрезок времени, когда i-й телевизор включен.

Выходные данные
Если в данном наборе нет лишнего телевизора, выведите «-1» (без кавычек). Иначе же выведите индекс этого телевизора (телевизоры нумеруются от 1 до n в порядке следования во входных данных).

Если ответов несколько, выведите любой.

Примеры

входные данные

3

1 3

4 6

1 7

выходные данные

1

входные данные

2

0 10

0 10

выходные данные

1

входные данные

3

1 2

3 4

6 8

выходные данные

-1

входные данные

3

1 2

2 3

3 4

выходные данные


2

Примечание
Рассмотрим первый тестовый пример. Изначально все моменты времени, в которые включен хотя бы один из телевизоров, составляют отрезок времени [1;7]. Можно легко увидеть, что после выключения первого телевизора данный отрезок не изменится. Также лишним может являться второй телевизор, потому что после его выключения отрезок времени, в который работает хотя бы один из оставшихся включенным телевизор, тоже не изменится.

Обратите внимание, что в четвёртом тестовом примере можно выключить телевизор с номером 2, так как даже без него целочисленные моменты, когда работает хотя бы один из оставшихся телевизоров, будут составлять отрезок [1;4].
И...да, входщие данные нужно рандомно генерить=)
