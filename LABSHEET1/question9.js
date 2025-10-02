import { copyFileSync } from 'fs';
const sourcePath = 'sample.txt'; 
const destinationPath = 'sample_copy.txt'; 

function copyFile(source, destination) {
  try {
    copyFileSync(source, destination);
    console.log(`Successfully copied '${source}' to '${destination}'`);
  } catch (err) {
    console.error(`Error copying file: ${err.message}`);
  }
}

copyFile(sourcePath, destinationPath);

