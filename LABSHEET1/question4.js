function bubbleSort(arr, ascending = true) {
  const n = arr.length;
  const array = [...arr];
  let swapped;

  for (let i = 0; i < n - 1; i++) {
    swapped = false;
    for (let j = 0; j < n - 1 - i; j++) {
      let shouldSwap;

      if (ascending) {
        shouldSwap = array[j] > array[j + 1];
      } else {
        shouldSwap = array[j] < array[j + 1];
      }

      if (shouldSwap) {
        [array[j], array[j + 1]] = [array[j + 1], array[j]];
        swapped = true;
      }
    }
    if (!swapped) break;
  }
  return array;
}

const unsorted = [64, 34, 25, 12, 22, 11, 90];
console.log(`Unsorted: [${unsorted}]`);
console.log(`Ascending: [${bubbleSort(unsorted, true)}]`);
console.log(`Descending: [${bubbleSort(unsorted, false)}]`);