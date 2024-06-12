#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 10;
    int arr[10];
    int p;
    int d;
    int i;
    int physicaladd;

    // Accepting dynamic input for the array
    printf("Enter 10 values for the array:\n");
    for(i = 0; i < n; i++) {
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("Enter 1 for PageNo and Displacement \nEnter 2 to exit program \n");
        scanf("%d", &i);

        switch(i) {
            case 1:
                printf("Enter pageno: ");
                scanf("%d", &p);

                if(p < 0 || p >= n) {
                    printf("Invalid pageno. Please enter a value between 0 and 9.\n");
                    break;
                }

                printf("Enter displacement: ");
                scanf("%d", &d);

                physicaladd = arr[p] + d;
                printf("The physical address is %d \n", physicaladd);
                break;

            case 2:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

    return 0;
}
//Enter 10 values for the array:
//Enter value for arr[0]: 1000
//Enter value for arr[1]: 2000
//Enter value for arr[2]: 30
//Enter value for arr[3]: 40
//Enter value for arr[4]: 50
//Enter value for arr[5]: 60
//Enter value for arr[6]: 70
//Enter value for arr[7]: 80
//Enter value for arr[8]: 90
//Enter value for arr[9]: 100
//Enter pageno: 0
//Enter displacement: 10
//The physical address is 1010 
