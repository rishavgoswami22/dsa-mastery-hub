let n = 5

for (let i = 0; i < n; i++) {
    let row = ""
    for (let j = 0; j < n - i - 1; j++) {
        row += " "
    }
    for (let k = 0; k < 2 * i + 1; k++) {
        if (k == 0 || k == 2 * i || (i == n - 1 && k % 2 == 0)) {
            row += "*";
        } else {
            row += " ";
        }
    }
    console.log(row)
}