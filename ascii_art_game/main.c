#include <stdio.h>
#include <stdlib.h>
#include "space_station.h"

int main(int argc,char *argv[]){
    int current_room = 0;
    int player_location[2] = {4,13};
    char input_key;
    char room1[rows][cols] = {
        "----ci-",
        "|     |",
        "|b    |",
        "|e    |",
        "|d    |",
        "|     |",
        "|b    |",
        "|a    |",
        "|t    |",
        "|t    |",
        "|e    |",
        "|r    |",
        "|y  ak|",
        "-------"
    };
    char room2[rows][cols] = {
        "----ci-",
        "|b   b|",
        "|e   e|",
        "|d   d|",
        "|     |",
        "|b   b|",
        "|e   e|",
        "|d   d|",
        "|     |",
        "|b   d|",
        "|e   e|",
        "|d   d|",
        "|   a |",
        "-------"
    };
    char rooms[2][rows][cols] = {{0},{0}};
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            rooms[0][i][j] = room1[i][j];
            rooms[1][i][j] = room2[i][j];
        }
    }
    while(1){
	    print_map(room1);
        input_key = getchar();
        switch(input_key){
            case 'i':
                up(current_room,rooms,player_location);
                break;
            case 'l':
                right(current_room,rooms,player_location);
                break;
            case 'k':
                down(current_room,rooms,player_location);
                break;
            case 'j':
                left(current_room,rooms,player_location);
                break;
        }
        system("cls");
    }
    return 0;
}
