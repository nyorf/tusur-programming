# Написать алгоритм на любом языке программирования для подсчета 0 в числе. 

def count_zeros(number):
    counter = 0
    for i in str(number):
        if int(i) == 0:
            counter += 1
    return counter

if __name__ == "__main__":
    number = int(input("Введите число: "))
    print("В числе", number, count_zeros(number), "нулей.")
