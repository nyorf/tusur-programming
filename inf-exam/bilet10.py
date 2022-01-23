# Написать алгоритм на любом языке программирования для поиска суммы  отрицательных чисел в  массиве. 

from random import randint

def negatives_sum(array):
    summ = 0
    for number in array:
        if number < 0:
            summ += number

    return summ

if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-50, 50))
    
    print("\nВывод массива:")
    print(array)

    print("\nСумма отрицательных чисел в массиве =", negatives_sum(array))
