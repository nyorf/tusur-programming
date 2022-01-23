# Написать алгоритм на любом языке программирования для поиска разности сумм первой и второй половины массива. 

from random import randint


def splitArrayToChunks(array):
    chunkSize = len(array) // 2
    splitArray = [array[i:i + chunkSize] for i in range(0, len(array), chunkSize)]
    return splitArray


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-10, 10))

    print("\nВывод массива:")
    print(array)

    if array_size % 2 == 0:
        array = splitArrayToChunks(array)
        print("\nСумма первой и второй половины массива:", sum(array[0]) + sum(array[1]))
    else:
        print("\nМассив невозможно ровно разделить пополам.")
