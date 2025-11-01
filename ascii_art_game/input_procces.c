#include "space_station.h"

int up(int current_room,char rooms[2][rows][cols],int player_location[2]){
    player_location[1] = player_location[1] - 1;
    if(current_room == 1){
        rooms[0][player_location[1]+1][player_location[0]] = ' ';
        rooms[0][player_location[1]][player_location[0]] = 'a';
    }
    return 0;
}
int down(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;
}
int left(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;
}
int right(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;

}
