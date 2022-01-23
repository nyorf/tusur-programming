def a(i):
    if i == 1:
        return 2
    else:
        return a(i - 1) * 0.5

if __name__ == "__main__":
    i = int(input("Введите число i: "))
    print("a(" + str(i) + ") =", a(i))
