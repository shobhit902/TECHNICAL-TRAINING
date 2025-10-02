function mergeSortedArrays(arr1, arr2) {
  const merged = [];
  let i = 0;
  let j = 0;
  while (i < arr1.length && j < arr2.length) {
    if (arr1[i] < arr2[j]) {
      merged.push(arr1[i]);
      i++;
    } else {
      merged.push(arr2[j]);
      j++;
    }
  }

  while (i < arr1.length) {
    merged.push(arr1[i]);
    i++;
  }

  while (j < arr2.length) {
    merged.push(arr2[j]);
    j++;
  }

  return merged;
}

const sortedA = [1, 3, 5, 7];
const sortedB = [2, 4, 6, 8, 10];
console.log(`Merged Sorted: [${mergeSortedArrays(sortedA, sortedB)}]`);
