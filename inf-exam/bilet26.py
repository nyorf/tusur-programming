# Написать алгоритм на любом языке программирования для переписывания оз одного массива в другой всех элементов больших среднего в массиве. 

from random import randint


def avg(array):
    return sum(array) / len(array)


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(1, 50))
    
    print("\nВывод массива:")
    print(array)

    array_avg = avg(array)
    print("\nСреднее значение элементов массива =", array_avg)
    
    result = []
    for number in array:
        if number > array_avg:
            result.append(number)
    
    print("\nЭлементы > среднего значения массива:", result)
