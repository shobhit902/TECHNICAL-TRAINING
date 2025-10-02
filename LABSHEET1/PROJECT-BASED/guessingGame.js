function guessingGame() {
    const num = Math.floor(Math.random() * 100) + 1;
    const attempts = 7;
    
    alert("Guess the number between 1 and 100!");
    
    for (let i = 1; i <= attempts; i++) {
        const guess = parseInt(prompt(`Attempt ${i}/${attempts}:`));
        
        if (guess === num) {
            alert(`Congratulations! You won in ${i} attempts!`);
            return;
        } else if (guess < num) {
            alert("Too low!");
        } else {
            alert("Too high!");
        }
    }
    
    alert(`Game Over! The number was ${num}`);
}

guessingGame();