from random import randint


def divbyfive_counter(array):
    counter = 0
    for number in array:
        if number % 5 == 0:
            counter += 1

    return counter


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(1, 100))
    
    print("\nВывод массива:")
    print(array)

    print("\nКоличество чисел, делящихся на 5 =", divbyfive_counter(array))
