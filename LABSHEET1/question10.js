import { readFileSync } from "fs";
const filePath = "sample.txt";
const searchPhrase = "file operations";

function searchInFile(path, phrase) {
  try {
    const data = readFileSync(path, "utf8");

    const regex = new RegExp(phrase, "gi");
    const matches = data.match(regex);

    if (matches) {
      console.log(
        `The phrase '${phrase}' was found ${matches.length} time(s).`
      );

      const lines = data.split("\n");
      lines.forEach((line, index) => {
        if (line.toLowerCase().includes(phrase.toLowerCase())) {
          console.log(`\tFound on Line ${index + 1}: ${line.trim()}`);
        }
      });
    } else {
      console.log(`The phrase '${phrase}' was NOT found in the file.`);
    }
  } catch (err) {
    console.error(`Error searching file: ${err.message}`);
  }
}

searchInFile(sourcePath, searchPhrase);
