from random import randint


def main_diagonal_sum(matrix, m, n):
    summ = 0
    for i in range(m):
        for j in range(n):
            if i == j:
                summ += matrix[i][j]
    return summ


def secondary_diagonal_sum(matrix, m, n):
    summ = 0
    for i in range(m):
        for j in range(n):
            if ((i + j) == (n - 1)):
                summ += matrix[i][j]
    return summ


if __name__ == "__main__":
    print("Введите размерность матрицы (n x n): ")
    n = int(input("n = "))

    matrix = [[0 for x in range(n)] for y in range(n)] 

    for i in range(n): 
        for j in range(n):
            matrix[i][j] = (randint(1, 10))
    
    print("\nВывод матрицы:")
    for i in range(n):
        for j in range(n):
            print(matrix[i][j], end="\t")
        print("\n")
    
    result = main_diagonal_sum(matrix, n, n) + secondary_diagonal_sum(matrix, n, n)
    print("\nСумма элементов главной и побочной диагоналей =", result)
