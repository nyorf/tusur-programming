# Написать алгоритм на любом языке программирования для поиска разности  двух массивов. 

from random import randint


def fill_array(array_size):
    array = []
    for _ in range(array_size):
        array.append(randint(-10, 10))

    return array


def vector_subtraction(first_array, second_array):
    array = []
    for i in range(len(first_array)):
        array.append(first_array[i] - second_array[i])

    return array


if __name__ == "__main__":
    first_array = fill_array(int(input("Введите размер 1 массива: ")))
    second_array = fill_array(int(input("Введите размер 2 массива: ")))

    print("\nВывод массивов:")
    print("Первый массив:", first_array)
    print("Второй массив:", second_array)

    if len(first_array) == len(second_array):
        print("\nРазность двух массивов:", vector_subtraction(first_array, second_array))
    else:
        print("\nРазмерности массивов не совпадают, невозможно подсчитать их разность.")
