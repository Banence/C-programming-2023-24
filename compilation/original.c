#define SIZE 5

int main(void) {

    int arr[SIZE] = {1, 2, 3, 4, 5};

    #if SIZE > 3
    int variable = 10;
    #endif

    return 0;
}