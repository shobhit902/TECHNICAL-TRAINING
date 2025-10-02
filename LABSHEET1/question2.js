function replaceAllOccurrences(mainStr, searchStr, replaceStr) {
  const regex = new RegExp(searchStr, "g");
  return mainStr.replace(regex, replaceStr);
}

const text = "The quick brown fox jumps over the quick dog. Quick, quick!";
const search = "quick";
const replacement = "slow";

console.log(`Original: "${text}"`);
console.log(`Replaced: "${replaceAllOccurrences(text, search, replacement)}"`);
