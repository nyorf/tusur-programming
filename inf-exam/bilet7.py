def isprime(number):
    if number == 1:
        return False

    for n in range(2, int(number ** 1/2) + 1):
        if number % n==0:
            return False
    return True


def primedigitcounter(number):
    counter = 0
    for i in str(number):
        if isprime(int(i)):
            counter += 1
    return counter


if __name__ == "__main__":
    number = int(input("Введите число: "))
    print("В числе", number, primedigitcounter(number), "простых чисел-цифр.")
