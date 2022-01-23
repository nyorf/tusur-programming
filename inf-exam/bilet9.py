# Написать алгоритм на любом языке программирования для поиска минимума в  массиве. 

from math import inf
from random import randint

def array_min(array):
    min_number = inf
    for number in array:
        if number < min_number:
            min_number = number
    return min_number

if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(1, 100))
    
    print("\nВывод массива:")
    print(array)

    print("\nМинимальное число в массиве =", array_min(array))
