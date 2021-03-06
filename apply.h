/*
 *  Program: pgn-extract: a Portable Game Notation (PGN) extractor.
 *  Copyright (C) 1994-2005 David Barnes
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 1, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  David Barnes may be contacted as D.J.Barnes@kent.ac.uk
 *  http://www.cs.kent.ac.uk/people/staff/djb/
 *
 */

void store_hash_value(Move *move_details,const char *fen);
Boolean apply_move_list(Game *game_details,unsigned *number_of_moves);
Boolean apply_eco_move_list(Game *game_details,unsigned *number_of_half_moves);
Board *rewrite_game(Move *moves,const char *fen);
char *StringCopy(const char *str);
Board *new_fen_board(const char *fen);
/* letters should contain a string of the form: "PNBRQK" */
void set_output_piece_characters(const char *letters);
char coloured_piece_to_SAN_letter(Piece coloured_piece);
void build_basic_EPD_string(const Board *board,char *fen);
char SAN_piece_letter(Piece piece);
const char *piece_str(Piece piece);
