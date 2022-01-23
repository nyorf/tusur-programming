def isprime(number):
    if number == 1 or number == 0:
        return False

    for n in range(2, int(number ** 1/2) + 1):
        if number % n==0:
            return False
    return True


if __name__ == "__main__":
    result = 1
    for number in range(21):
        if isprime(number):
            result *= number
    
    print("Произведение простых чисел от 0 до 20 =", result)
