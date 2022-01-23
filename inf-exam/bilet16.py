from random import randint


def negatives_counter(array):
    counter = 0
    for number in array:
        if number < 0:
            counter += 1

    return counter


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(-50, 50))
    
    print("\nВывод массива:")
    print(array)

    print("\nКоличество отрицательных чисел в массиве =", negatives_counter(array))
