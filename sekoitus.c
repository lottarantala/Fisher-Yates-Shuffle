#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);

int main(void){
    srand(time(NULL));
    uint8_t list[8] = {1,2,3,4,5,6,7,8};
    shuffle(list,8);
    for(int i = 0; i < 8; i++){
        printf("%d ", list[i]);
    }
    return 0;
}

void shuffle(uint8_t *list, uint16_t list_size){
    uint8_t luku = 0, temp = 0;
    for(int i = 0; i < list_size; i++){
        luku = rand() % (list_size - i);
        temp = list[luku];
        for(int j = luku; j < list_size - 1; j++){
            list[j] = list[j+1];
        }
        list[list_size-1] = temp;
    }
}
