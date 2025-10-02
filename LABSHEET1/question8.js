import { readFileSync } from 'fs';

const filePath = 'sample.txt';

function readFileAndDisplay(path) {
  try {
    const data = readFileSync(path, 'utf8');
    console.log("--- File Content (Line by Line) ---");
    const lines = data.split('\n');
    lines.forEach((line, index) => {
      console.log(`Line ${index + 1}: ${line}`);
    });
    console.log("------------------------------------");
  } catch (err) {
    console.error(`Error reading file: ${err.message}`);
  }
}

readFileAndDisplay(filePath);
