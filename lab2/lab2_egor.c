#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
    {
        setlocale(LC_ALL, "");
        int n, a = 0, b = 0, c = 0, current_number = 0, previous_number = 0;
        printf("Enter a value for variable n: ");
        scanf("%d", &n);
        for(int start = 0; start < n; start++)
        {
            previous_number = current_number;
            printf("Enter number #%d: ", start + 1);
            scanf("%d", &current_number);
            if(current_number > 0 && previous_number > 0)
            {
                a++;
            }
            else if(current_number > 0 && previous_number < 0 || current_number < 0 && previous_number > 0)
            {
                b++;
            }
            if (current_number > 0 && previous_number > 0 || current_number < 0 && previous_number < 0)
            {
                if(abs(previous_number) > abs(current_number))
                {
                    c++;
                }
            }
        }   
        printf("a) %d b) %d c) %d", a, b, c);
        return 0;
    }