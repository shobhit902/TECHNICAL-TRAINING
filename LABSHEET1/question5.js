function reverseArray(arr) {
  const array = [...arr]; 
  let left = 0;
  let right = array.length - 1;

  while (left < right) {
    [array[left], array[right]] = [array[right], array[left]];
    left++;
    right--;
  }

  return array;
}

const originalArray = [1, 2, 3, 4, 5];
console.log(`Original Array: [${originalArray}]`);
console.log(`Reversed Array: [${reverseArray(originalArray)}]`);

