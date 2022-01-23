def isodd(number):
    if number % 2 != 0:
        return True
    else:
        return False


if __name__ == "__main__":
    summ = 0
    for number in range(101):
        if isodd(number):
            summ += number
    
    print("Сумма нечётных чисел от 0 до 100 =", summ)
