from random import randint


if __name__ == "__main__":
    print("Введите размерность матрицы (m x n): ")
    m = int(input("m = "))
    n = int(input("n = "))

    matrix = [[0 for x in range(n)] for y in range(m)] 

    for i in range(m): 
        for j in range(n):
            matrix[i][j] = (randint(1, 10))
    
    summs_array = []

    print("\nВывод матрицы:")
    for i in range(m):
        line_summ = 0
        for j in range(n):
            print(matrix[i][j], end="\t")
            line_summ += matrix[i][j]
        print("\n")
        summs_array.append(line_summ)
    
    print("\nСуммы строк матрицы =", summs_array)
