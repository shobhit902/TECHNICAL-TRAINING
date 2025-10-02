function reverseString(str) {
  const arr = str.split("");
  let left = 0;
  let right = arr.length - 1;

  while (left < right) {
    [arr[left], arr[right]] = [arr[right], arr[left]];

    left++;
    right--;
  }

  return arr.join("");
}

const originalString = "hello world";
console.log(`Original: "${originalString}"`);
console.log(`Reversed: "${reverseString(originalString)}"`);
