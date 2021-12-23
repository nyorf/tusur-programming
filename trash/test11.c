        while ((ascending == 1 || descending == 1) && counter < n - 1) {
            if (matrix[i][j] < matrix[i][j + 1]) {
                descending = 0;
            }
            else if (matrix[i][j] > matrix[i][j + 1]) {
                ascending = 0;
            }
            counter++;
        }
        if (ascending == 1) {
            printf("The array is sorted in ascending order.\n");
        }
        else if (descending == 1) {
            printf("The array is sorted in descending order.\n");
        }
        else {
            printf("The array is not sorted.\n");
        }