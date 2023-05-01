Funct = (n, x, y) => {
    const a = n % x;
    const b = n % y;

    a === 0 && b === 0 ? console.log("n is divisible by both x and y") : console.log(" Try other inputs");
}
