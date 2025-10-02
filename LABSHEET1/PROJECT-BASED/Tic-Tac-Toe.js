function ticTacToe() {
    const board = Array(9).fill(' ');
    let player = 'X';
    
    function printBoard() {
        return `\n ${board[0]} | ${board[1]} | ${board[2]} \n---|---|---\n ${board[3]} | ${board[4]} | ${board[5]} \n---|---|---\n ${board[6]} | ${board[7]} | ${board[8]} \n`;
    }
    
    function checkWin() {
        const wins = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]];
        return wins.some(([a,b,c]) => board[a] === board[b] && board[b] === board[c] && board[a] !== ' ');
    }
    
    for (let turn = 0; turn < 9; turn++) {
        const pos = parseInt(prompt(printBoard() + `Player ${player}, enter position (0-8):`));
        
        if (board[pos] === ' ') {
            board[pos] = player;
            if (checkWin()) {
                alert(printBoard() + `Player ${player} wins!`);
                return;
            }
            player = player === 'X' ? 'O' : 'X';
        } else {
            alert("Invalid move!");
            turn--;
        }
    }
    
    alert(printBoard() + "It's a draw!");
}

ticTacToe();