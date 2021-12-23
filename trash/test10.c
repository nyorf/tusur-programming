            if (j == 0) {
                if (isIncreasing(matrix[i][j], matrix[i][j + 1])) {
                    row_status = 1;
                    current_row[j] = matrix[i][j];
                }
                else if (isDecreasing(matrix[i][j], matrix[i][j + 1])) {
                    row_status = -1;
                    current_row[j] = matrix[i][j];
                }
                else {
                    row_status = 0;
                    break;
                }
                continue;
            }
            if (row_status == 1) {
                if (!isIncreasing(matrix[i][j - 1], matrix[i][j])) {
                    rowIsMonotonic = false;
                    break;
                }
                else {
                    current_row[j] = matrix[i][j];
                }
            }
            else if (row_status == -1) {
                if (!isDecreasing(matrix[i][j - 1], matrix[i][j])) {
                    rowIsMonotonic = false;
                    break;
                }
                else {
                    current_row[j] = matrix[i][j];
                }
            }
        }
        if (rowIsMonotonic) {
            for (i = 0; i < n; i++) {
                printf("\n%d", current_row[i]);
            }
        }