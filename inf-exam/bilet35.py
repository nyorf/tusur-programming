# Написать алгоритм на любом языке программирования для вывода таблицы умножения. 

if __name__ == "__main__":

    rows = 9
    columns = 9

    for row_i in range(1, rows + 1):
        for column_i in range(1, columns + 1):
            result = row_i * column_i
            print(column_i, "x", row_i, "=", result, end="\t")
        print("\n")
