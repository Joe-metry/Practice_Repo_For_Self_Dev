Funct = (n, x, y) => {
    const a = n % x;
    const b = n % y;
    if (a === 0 && b === 0) {
        return "n is divisible by both x and y";
    }
    return " Try other inputs";
}
