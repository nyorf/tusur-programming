# Написать алгоритм на любом языке программирования для расчета синуса суммы двух углов, если синус меньше 0 то рассчитать косинус первого угла, если больше то косинус второго. 

# будет работать ТОЛЬКО если стоит numpy -- pip install numpy (или pip3 install numpy)
from math import sin, cos, radians, isclose
from numpy import isclose as isclose_np


def zero_check(number):
    if isclose_np(0.0, number):
        return 0
    else:
        return number


def sine_addition(alpha, beta):
    return sin(alpha) * cos(beta) + cos(alpha) * sin(beta)


if __name__ == "__main__":
    alpha = radians(int(input("Введите градус первого угла: ")))
    beta = radians(int(input("Введите градус второго угла: ")))
    sinesumm = sine_addition(alpha, beta)
    if sinesumm < 0:
        print("\nТак как синус суммы < 0, рассчитываем косинус первого угла.")
        print("Косинус первого угла =", zero_check(cos(alpha)))
    elif sinesumm > 0:
        print("\nТак как синус суммы > 0, рассчитываем косинус второго угла.")
        print("Косинус второго угла =", zero_check(cos(alpha)))
    else:
        print("\n¯\_(ツ)_/¯")
