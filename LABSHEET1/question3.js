function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
}

const numbers = [10, 5, 20, 8, 30];
const targetValue = 20;

const index = linearSearch(numbers, targetValue);

if (index !== -1) {
  console.log(`Element ${targetValue} found at index: ${index}`);
} else {
  console.log(`Element ${targetValue} not found in the array.`);
}