// Matching more than one word or character using the pipe (|) token.

let sen = 'I need to search for more than a word in here';
let word = /need|to|more/;

let testRes = word.test(sen);

console.log(testRes)
