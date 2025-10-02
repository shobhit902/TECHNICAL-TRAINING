function removeDuplicates(arr) {
  return [...new Set(arr)];
}

const arrayWithDuplicates = [1, 2, 2, 3, 4, 4, 5, 1];
console.log(`With Duplicates: [${arrayWithDuplicates}]`);
console.log(`Without Duplicates: [${removeDuplicates(arrayWithDuplicates)}]`);