function hangman() {
    const words = ['javascript', 'programming', 'computer', 'algorithm', 'function'];
    const word = words[Math.floor(Math.random() * words.length)];
    const guessed = Array(word.length).fill('_');
    let attempts = 6;
    const used = new Set();
    
    alert("Welcome to Hangman!");
    
    while (attempts > 0 && guessed.includes('_')) {
        const letter = prompt(
            `Word: ${guessed.join(' ')}\nAttempts left: ${attempts}\nUsed letters: ${[...used].sort().join(', ')}\n\nGuess a letter:`
        ).toLowerCase();
        
        if (used.has(letter)) {
            alert("Already guessed!");
            continue;
        }
        
        used.add(letter);
        
        if (word.includes(letter)) {
            for (let i = 0; i < word.length; i++) {
                if (word[i] === letter) guessed[i] = letter;
            }
            alert("Correct!");
        } else {
            attempts--;
            alert("Wrong!");
        }
    }
    
    alert(guessed.includes('_') ? `Game Over! The word was: ${word}` : `You won! The word was: ${word}`);
}

hangman();