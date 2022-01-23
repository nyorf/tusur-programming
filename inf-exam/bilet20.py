# Написать алгоритм на любом языке программирования для подсчета количества положительных элементов массива. 

from random import randint


def positives_counter(array):
    counter = 0
    for number in array:
        if number > 0:
            counter += 1

    return counter


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-50, 50))
    
    print("\nВывод массива:")
    print(array)

    print("\nКоличество положительных чисел в массиве =", positives_counter(array))
