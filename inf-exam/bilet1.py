# Написать алгоритм на любом языке программирования для подсчета факториала числа. 

def factorial(number):
    result = 1
    for i in range(1, number + 1):
        result *= i
    return result


if __name__ == "__main__":
    number = int(input("Введите число: "))
    print("Факториал числа", number, "=", factorial(number))
