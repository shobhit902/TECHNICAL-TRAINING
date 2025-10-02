function quizGame() {
  const questions = [
    {
      question: "What is the capital of France?",
      options: ["A) London", "B) Paris", "C) Berlin", "D) Madrid"],
      answer: "B",
    },
    {
      question: "What is 2 + 2?",
      options: ["A) 3", "B) 4", "C) 5", "D) 6"],
      answer: "B",
    },
    {
      question: "Which planet is known as the Red Planet?",
      options: ["A) Venus", "B) Jupiter", "C) Mars", "D) Saturn"],
      answer: "C",
    },
    {
      question: "Who wrote 'Romeo and Juliet'?",
      options: ["A) Dickens", "B) Shakespeare", "C) Austen", "D) Hemingway"],
      answer: "B",
    },
  ];

  let score = 0;

  alert("Welcome to the Quiz Game!");

  questions.forEach((q, i) => {
    const ans = prompt(
      `Question ${i + 1}: ${q.question}\n${q.options.join(
        "\n"
      )}\n\nYour answer:`
    ).toUpperCase();

    if (ans === q.answer) {
      alert("Correct!");
      score++;
    } else {
      alert(`Wrong! The correct answer was ${q.answer}`);
    }
  });

  alert(`Quiz finished! Your score: ${score}/${questions.length}`);
}

quizGame();
