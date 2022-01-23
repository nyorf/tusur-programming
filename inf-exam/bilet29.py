# Написать алгоритм на любом языке программирования для подсчета в числе суммы последней и первой цифры, если число цифр в числе известно заранее. 

def firstdigit(number):
    return number // 10 ** (len(str(number)) - 1)


def lastdigit(number):
    return number % 10


if __name__ == "__main__":
    number = int(input("Введите число (> 10): "))

    result = lastdigit(number) + firstdigit(number)
    print("\nСумма последней и первой цифры числа =", result)