def evendigitcounter(number):
    counter = 0
    for i in str(number):
        if int(i) % 2 == 0:
            counter += 1
    return counter

if __name__ == "__main__":
    number = int(input("Введите число: "))
    print("В числе", number, evendigitcounter(number), "чётных цифр.")
