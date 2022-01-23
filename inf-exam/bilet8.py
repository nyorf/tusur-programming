def a(i):
    if i == 1:
        return 2
    elif i == 2:
        return 1
    else:
        return a(i - 1) + a(i - 2) * 3


if __name__ == "__main__":
    number = int(input("Введите число: "))
    print("a(" + str(number) + ") =", a(number))
