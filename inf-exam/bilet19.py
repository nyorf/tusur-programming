from random import randint


def odds_sum(array):
    summ = 0
    for number in array:
        if number % 2 != 0:
            summ += number

    return summ


def evens_sum(array):
    summ = 0
    for number in array:
        if number % 2 == 0:
            summ += number

    return summ


if __name__ == "__main__":
    array = []
    array_size = int(input("Введите размер массива: "))
    for _ in range(array_size):
        array.append(randint(1, 100))
    
    print("\nВывод массива:")
    print(array)

    odds_evens_summ = [evens_sum(array), odds_sum(array)]

    print("\nМассив с суммами:", odds_evens_summ)
