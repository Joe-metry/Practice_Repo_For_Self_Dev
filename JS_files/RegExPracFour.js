// Extracting a match pattern and printing the result to the console using the match keyword, here we pass the pattern or variable containing the pattern rather than the variable containing the mix we are searching from.

let wordMix = 'Searching over this word mix';
let pattern = /mix/;

let result = wordMix.match(pattern);

console.log(result)
