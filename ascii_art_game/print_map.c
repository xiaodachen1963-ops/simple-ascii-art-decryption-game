#include <stdio.h>
#include "space_station.h"

int print_map(char map[15][8]){
    for(int i =0;i < 15;i++){
        for(int j = 0;j < 8;j++){
	    printf("%c",map[i][j]);
	}
	printf("\n");
    }
    return 0;
}
