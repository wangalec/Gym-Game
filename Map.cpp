// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#include "Map.h"

using namespace std;

Map::Map()
{
    resetMap();
}

/*
 * Algorithm: Resets positions of player, NPCs, and rooms and clears map_data_
 * Set Player position coordinates to 0
 * Set npc_count_ to false
 * Set room_count_ to 0
 * loop i from 0 to max_npcs_
 *      Set row and col of location to -1
 * loop i from 0 to max_rooms
 *      Set row and col of room location to -1
 * loop i from 0 to num_rows_
 *      loop j from 0 to num_cols_
 *          Set (i,j) location on map_data_ to '-'
 * Parameters: none
 * Return: nothing (void)
 */
void Map::resetMap()
{
    // resets player position, count values, and initializes values in position arrays to -1
    player_position_[0] = 0;
    player_position_[1] = 0;

    // set dungeon exit
    // dungeon_exit_[0] = num_rows_ - 1;
    // dungeon_exit_[1] = num_cols_ / 2;

    // for (int i = 0; i < max_npcs_; i++)
    // {
    //     npc_positions_[i][0] = -1;
    //     npc_positions_[i][1] = -1;
    // }
    // npc_count_ = 0;

    // for (int i = 0; i < max_rooms_; i++)
    // {
    //     room_positions_[i][0] = -1;
    //     room_positions_[i][1] = -1;
    // }
    // room_count_ = 0;

    for (int i = 0; i < num_rows_; i++)
    {
        for (int j = 0; j < num_cols_; j++)
        {
            map_data_[i][j] = UNEXPLORED;
        }
    }
    //map_data_[dungeon_exit_[0]][dungeon_exit_[1]] = EXIT;
}

// return player's row position
int Map::getPlayerRow()
{
    return player_position_[0];
}

// return player's column position
int Map::getPlayerCol()
{
    return player_position_[1];
}

bool Map::isOnMap(int row, int col)
{
    if (0 <= row && row < num_rows_ && 0 <= col && col < num_cols_)
    {
        return true;
    }
    return false;
}

// set player position, if in range
void Map::setPlayerPosition(int row, int col)
{
    if (isOnMap(row, col))
    {
        player_position_[0] = row;
        player_position_[1] = col;
    }
}

// returns member variable num_rows_
int Map::getNumRows()
{
    return num_rows_;
}

// returns member variable num_cols_
int Map::getNumCols()
{
    return num_cols_;
}

bool Map::isExplored(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    if (map_data_[row][col] == EXPLORED)
    {
        return true;
    }

    return false;
}

/*
 * Algorithm: checks if (row, col) is dungeon_exit_
 *
 */
// bool Map::isDungeonExit(int row, int col)
// {
//     if (row == dungeon_exit_[0] && col == dungeon_exit_[1])
//     {
//         return true;
//     }
//     return false;
// }

/*
 * Algorithm: Checks if the given row and column on map is a free space
 * if row and column is not within the map boundaries
 *      return false
 * if row and column is a npc location
 *      return false
 * if row and column is a room location
 *      return false
 * if row and column is the dungeon exit
 *      return false
 * return true
 *
 * Parameters: row (int), col (int)
 * Return: boolean (bool)
 */
bool Map::isFreeSpace(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    return true;
}

void Map::exploreSpace(int row, int col)
{
    if (isFreeSpace(row, col))
    {
        map_data_[player_position_[0]][player_position_[1]] = EXPLORED;
    }
}

bool Map::move(char direction)
{
    // check input char and move accordingly
    switch (tolower(direction))
    {
    case 'w': // if user inputs w, move up if it is an allowed move
        if (player_position_[0] > 0)
        {
            player_position_[0] -= 1;
        }
        else
        {
            return false;
        }
        break;
    case 's': // if user inputs s, move down if it is an allowed move
        if (player_position_[0] < num_rows_ - 1)
        {
            player_position_[0] += 1;
        }
        else
        {
            return false;
        }
        break;
    case 'a': // if user inputs a, move left if it is an allowed move
        if (player_position_[1] > 0)
        {
            player_position_[1] -= 1;
        }
        else
        {
            return false;
        }
        break;
    case 'd': // if user inputs d, move right if it is an allowed move
        if (player_position_[1] < num_cols_ - 1)
        {
            player_position_[1] += 1;
        }
        else
        {
            return false;
        }
        break;
    default:
        return false;
    }
    // if new location is an NPC location, mark as explored
    // if (isNPCLocation(player_position_[0], player_position_[1]))
    // {
    //     exploreSpace(player_position_[0], player_position_[1]);
    // }
    return true;
}

void Map::displayMap()
{
    for (int i = 0; i < num_rows_; i++)
    {
        for (int j = 0; j < num_cols_; j++)
        {
            if (player_position_[0] == i && player_position_[1] == j)
            {
                cout << PARTY;
            }
            // else if (map_data_[i][j] == 'N')
            // { // NPC location, have to check if they were found yet
            //     for (int k = 0; k < npc_count_; k++)
            //     {
            //         if (npc_positions_[k][0] == i && npc_positions_[k][1] == j)
            //         {
            //             if (npc_positions_[k][2] == true)
            //             {
            //                 cout << NPC;
            //             }
            //             else
            //             {
            //                 cout << UNEXPLORED;
            //             }
            //         }
            //     }
            // }
            else
            {
                cout << map_data_[i][j];
            }
        }
        cout << endl;
    }
}