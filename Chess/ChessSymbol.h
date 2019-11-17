#ifndef CHESS_CHESSSYMBOL_H_
#define CHESS_CHESSSYMBOL_H_

enum class ChessWhiteSymbol : wchar_t{
	pawn   =  '♙',
	knight =  '♘', 
	king   =  '♔',
	queen  =  '♕',
	rook   =  '♖',
	bishop =  '♗'
};

enum class ChessBlackSymbol : wchar_t {
	pawn = '♟',
	knight = '♞',
	king = '♚',
	queen = '♛',
	rook = '♜',
	bishop = '♝'
}




#endif // !CHESS_CHESSSYMBOL_H_
