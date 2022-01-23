# Написать алгоритм на любом языке программирования для вывода всех простых чисел от 0 до 100. 

def isprime(number):
    if number == 1:
        return False

    for n in range(2, int(number ** 1/2) + 1):
        if number % n==0:
            return False
    return True


if __name__ == "__main__":
    summ = 0
    for number in range(101):
        if isprime(number):
            summ += number
    
    print("Сумма простых чисел от 0 до 100 =", summ)
