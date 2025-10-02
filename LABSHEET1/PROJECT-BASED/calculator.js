function calculator() {
    const num1 = parseFloat(prompt("Enter first number:"));
    const op = prompt("Enter operator (+, -, *, /):");
    const num2 = parseFloat(prompt("Enter second number:"));
    
    let result;
    
    if (op === '+') result = num1 + num2;
    else if (op === '-') result = num1 - num2;
    else if (op === '*') result = num1 * num2;
    else if (op === '/') result = num2 !== 0 ? num1 / num2 : 'Error: Division by zero';
    else result = 'Invalid operator';
    
    alert(`Result: ${result}`);
}

calculator();