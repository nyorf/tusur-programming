# Написать алгоритм на любом языке программирования для подсчета суммы элементов массива с четными индексами. 

from random import randint


def even_index_sum(array):
    summ = 0
    for i in len(array):
        if i % 2 == 0:
            summ += array[i]

    return summ


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-50, 50))
    
    print("\nВывод массива:")
    print(array)

    print("\nСумма элементов с чётными индексами =", even_index_sum(array))
