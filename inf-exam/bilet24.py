from random import randint


if __name__ == "__main__":
    print("Введите размерность матрицы (m x n): ")
    m = int(input("m = "))
    n = int(input("n = "))

    matrix = [[0 for x in range(n)] for y in range(m)] 

    for i in range(m): 
        for j in range(n):
            matrix[i][j] = (randint(1, 10))
    
    summ = 0

    print("\nВывод матрицы:")
    for i in range(m):
        for j in range(n):
            print(matrix[i][j], end="\t")
            summ += matrix[i][j]
        print("\n")
    
    print("\nСумма элементов матрицы =", summ)
