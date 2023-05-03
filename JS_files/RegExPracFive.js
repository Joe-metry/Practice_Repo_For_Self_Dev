i// Extracting a match pattern and printing the result to the console using the match keyword and the i and g flags to first ignore case and also get more than one occurrences of the pattern, here we pass the pattern or variable containing the pattern rather than the variable containing the mix we are searching from.

let wordMix = 'Mr. Mix, MiX me some solid MIx, now start the mIX';
let pattern = /mix/ig;

let result = wordMix.match(pattern);

console.log(result)
