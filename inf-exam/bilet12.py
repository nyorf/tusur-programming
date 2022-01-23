# Написать алгоритм на любом языке программирования для поиска разности минимального и максимального числа в массиве. 

from math import inf
from random import randint


def array_min(array):
    min_number = inf
    for number in array:
        if number < min_number:
            min_number = number

    return min_number


def array_max(array):
    max_number = -inf
    for number in array:
        if number > max_number:
            max_number = number

    return max_number


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-100, 100))

    print("\nВывод массива:")
    print(array)

    print("\nРазность между минимальным и максимальным числом в массиве =", end=" ")
    print(array_min(array) - array_max(array))
