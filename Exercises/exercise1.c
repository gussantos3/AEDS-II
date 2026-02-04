#include <stdio.h>
#include <stdbool.h>

bool verify(int array [] , int size, int num);

int main()
{
    int size;
        printf("digite o tamanho do array\n");
        scanf("%d" , &size);

    int array[size] , num;

    for(int i = 0; i < size; i++){
        printf("digite os numeros que estarao presentes no array\n");
        scanf("%d" , &array[i]);
    }

    printf("digite o numero que deseja verificar\n");
        scanf("%d" , &num);

    printf("o resultado da sua busca eh : %d\n" , verify(array, size , num));
}
bool verify(int array[] , int size , int num)
{
    for(int i = 0; i < size; i++){
        if(array[i] == num){
            return true;
        }
    }
    return false;
}