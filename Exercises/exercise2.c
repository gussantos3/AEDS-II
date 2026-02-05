#include <stdio.h>

int verify (int array[] , int size , int num);

int main()
{
    int size;
        printf("digite o tamanho do array\n");
        scanf("%d" , &size); 

    int array[size] , num;
        for(int i = 0; i < size; i++){
            printf("digite os numeros que estarao dentro do array\n");
            scanf("%d" , &array[i]);
        }        
    
    printf("digite o numero que deseja buscar\n");
        scanf("%d" , &num);
    
    printf("a posicao que o seu numero se encontra eh: %d\n " , verify(array, size , num));

return 0;
}
int verify (int array[] , int size , int num)
{
    int left = 0;
    int right = size -1;
    
    while(left <= right){
        int mid = left + (right - left)/ 2;
            if(num == array[mid])
                return mid;
        
             if(num < array[mid])
                right = mid - 1;

             else
                left = mid + 1;
        }
    return -1;
}