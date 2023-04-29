const fun = function (arrayOfScores){
	let sum = 0;
	const arrlen = arrayOfScores.length;
	for(let i = 0; i < arrlen; i++) {
		sum += arrayOfScores[i];
	}
	const avr = (sum / arrlen);
return avr;
}
